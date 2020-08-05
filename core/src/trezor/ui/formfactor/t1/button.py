from trezor import ui
from trezor.ui import display, in_area

from ..common.button import ButtonBase

if False:
    from ..common.button import ButtonContent, ButtonStyleType, ButtonStyleStateType


class ButtonDefault:
    class normal:
        inverted = True
        border = True
        text_style = ui.BOLD

    class active(normal):
        inverted = False

    class disabled(normal):
        pass  # FIXME


class ButtonMono(ButtonDefault):
    class normal(ButtonDefault.normal):
        text_style = ui.MONO

    class active(ButtonDefault.active):
        text_style = ui.MONO

    class disabled(ButtonDefault.disabled):
        text_style = ui.MONO


class ButtonMonoDark(ButtonDefault):
    class normal:
        inverted = False
        border = False
        text_style = ui.MONO

    class active(normal):
        inverted = True

    class disabled(normal):
        pass  # FIXME


class ButtonConfirm(ButtonDefault):
    pass


class ButtonCancel(ButtonDefault):
    class normal(ButtonDefault.normal):
        inverted = False
        border = False

    class active(ButtonDefault.active):
        inverted = True
        border = False

    class disabled(ButtonDefault.disabled):
        inverted = False
        border = False


class ButtonAbort(ButtonCancel):
    pass


class ButtonClear(ButtonCancel):
    pass


class ButtonMonoConfirm(ButtonDefault):
    class normal(ButtonDefault.normal):
        text_style = ui.MONO

    class active(ButtonDefault.active):
        text_style = ui.MONO

    class disabled(ButtonDefault.disabled):
        text_style = ui.MONO


class Button(ButtonBase):
    def __init__(
        self,
        area: ui.Area,
        content: ButtonContent,
        style: ButtonStyleType = ButtonDefault,
    ) -> None:
        super().__init__(area, content)

        self.normal_style = style.normal
        self.active_style = style.active
        self.disabled_style = style.disabled

        if in_area(self.area, 0, ui.HEIGHT - 1):
            self.is_left = True
            self.is_right = False
        elif in_area(self.area, ui.WIDTH - 1, ui.HEIGHT - 1):
            self.is_left = False
            self.is_right = True
        else:
            raise RuntimeError

    def render_background(
        self, s: ButtonStyleStateType, ax: int, ay: int, aw: int, ah: int
    ) -> None:
        text_width = display.text_width(self.text, s.text_style)

        fg_color, bg_color = (ui.BG, ui.FG) if s.inverted else (ui.FG, ui.BG)
        radius = 2  # FIXME does not work with 1 (bar is not rendered)
        h_border = 2 if s.border else 0
        if self.is_right:
            display.bar_radius(
                ui.WIDTH - text_width - h_border,
                ay - 2,
                text_width + h_border,
                ah + 2,
                bg_color,
                ui.BG,
                radius,
            )
        else:
            display.bar_radius(
                0 + h_border,
                ay - 2,
                text_width + h_border,
                ah + 2,
                bg_color,
                ui.BG,
                radius,
            )
        # display.bar(ax, ay, aw, ah, bg_color#)
        # display.bar_radius(ax, ay, aw, ah, bg_color, ui.BG, 2)

    def render_content(
        self, s: ButtonStyleStateType, ax: int, ay: int, aw: int, ah: int
    ) -> None:
        fg_color, bg_color = (ui.BG, ui.FG) if s.inverted else (ui.FG, ui.BG)
        h_border = 1 if s.border else 0
        if self.is_right:
            display.text_right(
                ui.WIDTH - h_border,
                ui.HEIGHT - 2,
                self.text,
                s.text_style,
                fg_color,
                bg_color,
            )
        else:
            display.text(
                0 + h_border, ui.HEIGHT - 2, self.text, s.text_style, fg_color, bg_color
            )
