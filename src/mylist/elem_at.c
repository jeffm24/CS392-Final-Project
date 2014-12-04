#include "mylist.h"

/*
 * Pre: Takes a t_node* for the head and an unsigned int index to get the node at.
 * Post: Returns the t_node at the given index.
 */
void *elem_at(t_node *h, unsigned int i)
{
  t_node *n;

  if ((n = node_at(h, i)) != NULL)
    return n->elem;
  else
    return NULL;
}
