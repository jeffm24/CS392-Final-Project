#include "mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Refreshes the buffer.
 */
void refresh_buff()
{
  int currPos;
  
  gl_env.flag = 1;

  currPos = gl_env.pos;
  tputs("\033[K", 1, my_termprint);
  move_start();
  my_str((char*)gl_env.currNode->elem);

  gl_env.pos = currPos;

  gl_env.flag = 0;
}
