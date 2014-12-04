#include "mylist.h"

/*
 * Pre: Takes a t_node** for the head of the list and an unsigned int index to remove the node at.
 * Post: Removes the node at the given index and returns its elem.
 */
void *remove_node_at(t_node **h, unsigned int i)
{
  t_node *it;
  void *e;
  
  if (h != NULL && *h != NULL) {
    if (i != 0) {
      for (it = *h ; i > 0 && it->next != NULL; i--, it = it->next)
	;
      e = it->elem;
      if (it->next != NULL) {
	(it->prev)->next = it->next;
	(it->next)->prev = it->prev;	
      } else {
	(it->prev)->next = NULL;
      }
      free(it);
      return e;
    } else
      remove_node(h);
  } else
    return NULL;
}
