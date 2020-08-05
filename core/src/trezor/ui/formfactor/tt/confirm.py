from trezor import res, ui

from ..common.confirm import CANCELLED, CONFIRMED, INFO, ConfirmBase
from .button import Button, ButtonCancel, ButtonConfirm

if False:
    from typing import Optional
    from trezor.ui.button import ButtonContent, ButtonStyleType


class Confirm(ConfirmBase):
    DEFAULT_CONFIRM = res.load(ui.ICON_CONFIRM)
    DEFAULT_CONFIRM_STYLE = ButtonConfirm
    DEFAULT_CANCEL = res.load(ui.ICON_CANCEL)
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

        if confirm is not None:
            if cancel is None:
                area = ui.grid(4, n_x=1)
            elif major_confirm:
                area = ui.grid(13, cells_x=2)
            else:
                area = ui.grid(9, n_x=2)
            self.confirm = Button(
                area, confirm, confirm_style
            )  # type: Optional[Button]
            self.confirm.on_click = self.on_confirm  # type: ignore

        if cancel is not None:
            if confirm is None:
                area = ui.grid(4, n_x=1)
            elif major_confirm:
                area = ui.grid(12, cells_x=1)
            else:
                area = ui.grid(8, n_x=2)
            self.cancel = Button(area, cancel, cancel_style)  # type: Optional[Button]
            self.cancel.on_click = self.on_cancel  # type: ignore
