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
  free(gl_env.currNode->elem);
  gl_env.currNode = xmalloc(1);
  ((char*)gl_env.currNode->elem)[0] = '\0';
  temp->next = gl_env.currNode;
  gl_env.currNode->prev = temp;

  gl_env.pos = 0;
  gl_env.size = 0;
}
