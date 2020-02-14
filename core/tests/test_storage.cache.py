from common import *
from mock_storage import mock_storage

from storage import cache
from trezor.messages.Initialize import Initialize
from trezor.wire import DUMMY_CONTEXT

from apps.homescreen import handle_Initialize

KEY = 99


class TestStorageCache(unittest.TestCase):
    def test_start_session(self):
        session_id_a = cache.start_session()
        self.assertIsNotNone(session_id_a)
        session_id_b = cache.start_session()
        self.assertNotEqual(session_id_a, session_id_b)

    def test_session_queue(self):
        session_id = cache.start_session()
        self.assertEqual(cache.start_session(session_id), session_id)
        for i in range(cache._MAX_SESSIONS_COUNT):
            cache.start_session()
        self.assertNotEqual(cache.start_session(session_id), session_id)

    def test_get_set(self):
        value = cache.get(KEY)
        self.assertIsNone(value)

        cache.set(KEY, "hello")
        value = cache.get(KEY)
        self.assertEqual(value, "hello")

        cache.clear()
        value = cache.get(KEY)
        self.assertIsNone(value)

    @mock_storage
    def test_Initialize(self):
        def call_Initialize(**kwargs):
            msg = Initialize(**kwargs)
            return await_result(handle_Initialize(DUMMY_CONTEXT, msg))

        # calling Initialize without an ID allocates a new one
        session_id = cache.start_session()
        features = call_Initialize()
        self.assertNotEqual(session_id, features.session_id)

        # calling Initialize with the current ID does not allocate a new one
        features = call_Initialize(session_id=session_id)
        self.assertEqual(session_id, features.session_id)

        # store "hello"
        cache.set(KEY, "hello")
        # check that it is cleared
        features = call_Initialize()
        session_id = features.session_id
        self.assertIsNone(cache.get(KEY))
        # store "hello" again
        cache.set(KEY, "hello")
        self.assertEqual(cache.get(KEY), "hello")

        # supplying a different session ID starts a new cache
        call_Initialize(session_id=b"A")
        self.assertIsNone(cache.get(KEY))

        # but resuming a session loads the previous one
        call_Initialize(session_id=session_id)
        self.assertEqual(cache.get(KEY), "hello")


if __name__ == "__main__":
    unittest.main()
