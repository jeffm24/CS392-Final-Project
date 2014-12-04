#include "mylist.h"

/*
 * Pre: Takes a t_node** for the head of the list.
 * Post: Removes the last node in the list and returns the elem of that node.
 */
void *remove_last(t_node **h)
{
  t_node *it;
  void *e;
  
  if (h != NULL && *h != NULL) {
    if ((*h)->next != NULL) {
      it = *h;
      for(; it->next != NULL ; it = it->next)
	;
      e = it->elem;
      (it->prev)->next = NULL;
      free(it);
    } else {
      e = (*h)->elem;
      free(*h);
    }
    return e;
  } else 
    return NULL;
}
