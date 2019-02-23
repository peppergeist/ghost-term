#include <ncurses.h>
#include "setup.h"

int
main() {
    setup_curses();
    mvprintw(5, 5, "X");
    refresh();
    getch();
    endwin();

    return 0;
}

