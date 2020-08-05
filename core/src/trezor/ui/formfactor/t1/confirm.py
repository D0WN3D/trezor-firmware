from trezor import ui

from ..common.confirm import CANCELLED, CONFIRMED, INFO, ConfirmBase
from .button import Button, ButtonCancel, ButtonConfirm

if False:
    from typing import Optional
    from trezor.ui.button import ButtonContent, ButtonStyleType


class Confirm(ConfirmBase):
    DEFAULT_CONFIRM = "CONFIRM"
    DEFAULT_CONFIRM_STYLE = ButtonConfirm
    DEFAULT_CANCEL = "CANCEL"
    DEFAULT_CANCEL_STYLE = ButtonCancel

    def __init__(
        self,
        content: ui.Component,
        confirm: Optional[ButtonContent] = DEFAULT_CONFIRM,
        confirm_style: ButtonStyleType = DEFAULT_CONFIRM_STYLE,
        cancel: Optional[ButtonContent] = DEFAULT_CANCEL,
        cancel_style: ButtonStyleType = DEFAULT_CANCEL_STYLE,
        major_confirm: bool = False,
    ) -> None:
        super().__init__(content)

        # na t1 je pravy button zarovnany doprava
        if confirm is not None:
            area = (ui.WIDTH // 2, ui.HEIGHT - 11, ui.WIDTH // 2, 11)  # FIXME
            self.confirm = Button(
                area, confirm, confirm_style
            )  # type: Optional[Button]
            self.confirm.on_click = self.on_confirm  # type: ignore

        if cancel is not None:
            area = (0, ui.HEIGHT - 11, ui.WIDTH // 2, 11)
            self.cancel = Button(area, cancel, cancel_style)  # type: Optional[Button]
            self.cancel.on_click = self.on_cancel  # type: ignore
