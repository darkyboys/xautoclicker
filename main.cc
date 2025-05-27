#include <X11/Xlib.h>
#include <X11/extensions/XTest.h>
#include <unistd.h> // for usleep

int main() {
    Display* display = XOpenDisplay(nullptr);
    if (!display) return 1;

    const int cps = 100; // clicks per second; crank this up to insane levels!
    const int delay_us = 1000000 / cps; // delay between clicks

    while (true) {
        // Press left button
        XTestFakeButtonEvent(display, 1, True, CurrentTime);
        XFlush(display);

        // Release left button
        XTestFakeButtonEvent(display, 1, False, CurrentTime);
        XFlush(display);

        usleep(delay_us);
    }

    XCloseDisplay(display);
    return 0;
}
