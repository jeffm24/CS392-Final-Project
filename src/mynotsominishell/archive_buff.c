#include "mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Archives the current buffer and clears it out
 */
void archive_buff()
{
  t_node *temp;
  
  temp = new_node("");
  temp->elem = xmalloc(256);
  memset(temp->elem, '\0', sizeof(temp->elem));
  temp->prev = gl_env.currNode;
  gl_env.currNode->next = temp;
  gl_env.currNode = gl_env.currNode->next;

  gl_env.pos = 0;
  gl_env.size = 0;
}
