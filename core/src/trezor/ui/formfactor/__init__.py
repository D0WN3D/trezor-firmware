"""
TODO docs
"""

from .. import HEIGHT, WIDTH

_IS_T1 = WIDTH == 128

if _IS_T1:
    from .t1.button import *
    from .t1.confirm import Confirm, CONFIRMED, CANCELLED, INFO
    from .t1.text import (
        header,
        TEXT_HEADER_HEIGHT,
        TEXT_LINE_HEIGHT,
        TEXT_LINE_HEIGHT_HALF,
        TEXT_MARGIN_LEFT,
        TEXT_MAX_LINES,
    )

else:
    from .tt.button import *
    from .tt.confirm import Confirm, CONFIRMED, CANCELLED, INFO
    from .tt.text import (
        header,
        TEXT_HEADER_HEIGHT,
        TEXT_LINE_HEIGHT,
        TEXT_LINE_HEIGHT_HALF,
        TEXT_MARGIN_LEFT,
        TEXT_MAX_LINES,
    )
