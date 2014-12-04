#include "mylist.h"

/*
 * Pre: Takes a t_node** for the head of the list.
 * Post: Frees every node in the list.
 */
void empty_list(t_node **h)
{
  while (remove_node(h) != NULL)
    ;
} 
