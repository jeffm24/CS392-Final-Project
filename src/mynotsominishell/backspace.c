#include "mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Backspaces one character on the buffer and refreshes.
 */
void backspace()
{
  if (gl_env.size > 1 && gl_env.pos > 0) {
    remove_char_at((char**)&gl_env.currNode->elem, gl_env.pos);
    gl_env.size--;
    culeft();
    refresh_buff();
  }
}
