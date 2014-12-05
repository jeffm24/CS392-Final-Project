#include "my.h"
/*
 * Author: Jeff Mariconda
 * Class: CS-392
 *
 * Pre: Takes a pointer to the address of the string, a str to add, and an index to 
 *      add it at.
 * Post: Inserts the string at the given index.
 */
void insert_str_at(char **str, char *ins, unsigned int i)
{
  char tmp[256];
  unsigned int nStr, nIns;
  unsigned int x, y, n;

  if (*str != NULL && ins != NULL) {
    nStr = my_strlen(*str);
    nIns = my_strlen(ins);

    if (i < nStr) {
      for (x = 0 ; x < i ; x++)
	tmp[x] = (*str)[x];

      for (y = 0 ; ins[y] != '\0' ; x++, y++)
	tmp[x] = ins[y];
       
      for (; (*str)[i] != '\0' ; x++, i++)
	tmp[x] = (*str)[i];
      tmp[x] = '\0';
     
      for (x = 0 ; tmp[x] != '\0' ; x++)
	(*str)[x] = tmp[x];
      (*str)[x] = '\0';

    } else {
      (*str) = my_strcat((*str), ins);
    }
  }
}
