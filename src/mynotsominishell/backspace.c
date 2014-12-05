#include "mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Backspaces one character on the buffer and refreshes.
 */
void backspace()
{
  if (gl_env.size > 1 && gl_env.pos > 0) {
    remove_substring((char**)&gl_env.currNode->elem, gl_env.pos - 1, gl_env.pos - 1);
    gl_env.size--;
    culeft();
    refresh_buff();
  }
}
