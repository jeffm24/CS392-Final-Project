#include "mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Refreshes the buffer.
 */
void refresh_buff()
{
  int i;
  int currPos;
  
  gl_env.flag = 1;

  currPos = gl_env.pos;
  
  move_start();
  tputs("\033[K", 1, my_termprint);
  my_str((char*)gl_env.currNode->elem);

  gl_env.pos = gl_env.size;
  while (gl_env.pos > currPos)
    culeft();
  
  gl_env.flag = 0;
}
