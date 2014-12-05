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
  for (i = 0 ; i < currPos ; i++) {
    culeft();
  }
  my_str((char*)gl_env.currNode->elem);

  gl_env.pos = currPos;
}
