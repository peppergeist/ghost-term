#include <ncurses.h>
#include "setup.h"

void
setup_curses() {
    initscr();
    noecho();
    curs_set(FALSE);
}
