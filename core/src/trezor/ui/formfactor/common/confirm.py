from trezor import loop, ui

if False:
    from typing import Optional, List, Tuple
    from .button import ButtonBase

if __debug__:
    from apps.debug import swipe_signal, confirm_signal

CONFIRMED = object()
CANCELLED = object()
INFO = object()


class ConfirmBase(ui.Layout):
    def __init__(self, content: ui.Component,) -> None:
        self.content = content
        self.confirm = None  # type: Optional[ButtonBase]
        self.cancel = None  # type: Optional[ButtonBase]

    def dispatch(self, event: int, x: int, y: int) -> None:
        super().dispatch(event, x, y)
        self.content.dispatch(event, x, y)
        if self.confirm is not None:
            self.confirm.dispatch(event, x, y)
        if self.cancel is not None:
            self.cancel.dispatch(event, x, y)

    def on_confirm(self) -> None:
        raise ui.Result(CONFIRMED)

    def on_cancel(self) -> None:
        raise ui.Result(CANCELLED)

    if __debug__:

        def read_content(self) -> List[str]:
            return self.content.read_content()

        def create_tasks(self) -> Tuple[loop.Task, ...]:
            return super().create_tasks() + (confirm_signal(),)
