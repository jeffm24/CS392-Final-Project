#include "../../include/mynotsominishell.h"

void move_cursor_to(int x, int y) {
    tputs(tgoto(gl_env.move, x, y), 1, my_termprint);
}