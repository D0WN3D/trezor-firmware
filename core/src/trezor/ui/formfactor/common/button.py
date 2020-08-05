from micropython import const

from trezor import ui
from trezor.ui import display, in_area

if False:
    from typing import List, Optional, Type, Union

    ButtonContent = Optional[Union[str, bytes]]
    ButtonStyleType = Type[ButtonDefault]
    ButtonStyleStateType = Type[ButtonDefault.normal]

# button states
_INITIAL = const(0)
_PRESSED = const(1)
_RELEASED = const(2)
_DISABLED = const(3)


class ButtonBase(ui.Component):
    def __init__(self, area: ui.Area, content: ButtonContent) -> None:
        if isinstance(content, str):
            self.text = content
            self.icon = b""
        elif isinstance(content, bytes):
            self.icon = content
            self.text = ""
        else:
            raise TypeError
        self.area = area
        self.state = _INITIAL
        self.repaint = True

    def enable(self) -> None:
        if self.state is not _INITIAL:
            self.state = _INITIAL
            self.repaint = True

    def disable(self) -> None:
        if self.state is not _DISABLED:
            self.state = _DISABLED
            self.repaint = True

    def on_render(self) -> None:
        if self.repaint:
            if self.state is _INITIAL or self.state is _RELEASED:
                s = self.normal_style  # FIXME these are set up in child classes
            elif self.state is _DISABLED:
                s = self.disabled_style
            elif self.state is _PRESSED:
                s = self.active_style
            ax, ay, aw, ah = self.area
            self.render_background(s, ax, ay, aw, ah)
            self.render_content(s, ax, ay, aw, ah)
            self.repaint = False

    def render_background(
        self, s: ButtonStyleStateType, ax: int, ay: int, aw: int, ah: int
    ) -> None:
        raise NotImplementedError

    def render_content(
        self, s: ButtonStyleStateType, ax: int, ay: int, aw: int, ah: int
    ) -> None:
        raise NotImplementedError

    def on_touch_start(self, x: int, y: int) -> None:
        if self.state is _DISABLED:
            return
        if in_area(self.area, x, y):
            self.state = _PRESSED
            self.repaint = True
            self.on_press_start()

    def on_touch_move(self, x: int, y: int) -> None:
        if self.state is _DISABLED:
            return
        if in_area(self.area, x, y):
            if self.state is _RELEASED:
                self.state = _PRESSED
                self.repaint = True
                self.on_press_start()
        else:
            if self.state is _PRESSED:
                self.state = _RELEASED
                self.repaint = True
                self.on_press_end()

    def on_touch_end(self, x: int, y: int) -> None:
        state = self.state
        if state is not _INITIAL and state is not _DISABLED:
            self.state = _INITIAL
            self.repaint = True
        if in_area(self.area, x, y):
            if state is _PRESSED:
                self.on_press_end()
                self.on_click()

    def on_press_start(self) -> None:
        pass

    def on_press_end(self) -> None:
        pass

    def on_click(self) -> None:
        pass

    if __debug__:

        def read_content(self) -> List[str]:
            return ["<Button: {}>".format(self.text)]
