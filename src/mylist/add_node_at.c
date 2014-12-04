#include "mylist.h"

/*
 * Pre: Takes a t_node* to add, a t_node** for the head of the list, and an unsigned int index to 
 *      add the node at.
 * Post: Adds the node at the spcified index in the list.
 */
void add_node_at(t_node *n, t_node **h, unsigned int i)
{
  t_node *it;

  if (n != NULL) {
    if (h != NULL && *h != NULL) {
      if (i != 0) {
	it = *h;
	for (; i > 1 && it->next != NULL ; i--, it = it->next)
	  ;
	if (it->next != NULL) {
	  n->next = it->next;
	  (it->next)->prev = n;
	  it->next = n;
	  n->prev = it;
	} else {
	  it->next = n;
	  n->prev = it;
	}
      } else {
	add_node(n, h);
      }
    } else
      *h = n;
  }
}
