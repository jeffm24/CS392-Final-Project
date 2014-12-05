#include "mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Refreshes the buffer.
 */
void refresh_buff()
{
  int i;

  for (i = 0 ; i < gl_env.pos ; i++) {
    culeft();
  }
  my_str((char*)gl_env.currNode->elem);
}
