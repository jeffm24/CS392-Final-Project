#include "mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Archives the current buffer and clears it out
 */
void archive_buff()
{
  t_node *temp;
  
  temp = gl_env.currNode;
  gl_env.currNode = new_node("");
  temp->next = gl_env.currNode;
  gl_env.currNode->prev = temp;

  gl_env.pos = 0;
  gl_env.size = 0;
}
