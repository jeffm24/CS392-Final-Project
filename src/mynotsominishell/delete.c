#include "mynotsominishell.h"
/*
 *
 * Deletes one character under cursor.
 *
 */
void delete()
{
  if (gl_env.size > 0) {
    remove_substring((char**)&gl_env.currNode->elem, gl_env.pos, gl_env.pos);
    gl_env.size--;
    refresh_buff();
  }
}
