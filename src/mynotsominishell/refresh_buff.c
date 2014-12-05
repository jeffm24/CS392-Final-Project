#include "mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Refreshes the buffer.
 */
void refresh_buff()
{
  move_cursor_to(0, 0);
  my_str((char*)gl_env.currNode->elem);
}
