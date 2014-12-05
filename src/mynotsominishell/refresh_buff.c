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
  
  currPos = gl_env.pos;
  while (gl_env.pos > 0) {
    culeft();
  }
  my_str((char*)gl_env.currNode->elem);

  gl_env.pos = currPos;
}
