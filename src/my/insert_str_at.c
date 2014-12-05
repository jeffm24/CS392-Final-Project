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
  char *tmp;
  unsigned int nStr, nIns;
  // unsigned int x, y, n;

  if (*str != NULL && ins != NULL) {
    nStr = my_strlen(*str);
    nIns = my_strlen(ins);

    if (i < nStr) {
      tmp = xmalloc(nStr + nIns - 1);
      
      tmp = my_strncpy(tmp, (*str), i);
      tmp = my_strcat(tmp, ins);
      tmp = my_strcat(tmp, get_substring((*str), i, nStr));
      (*str) = my_strcpy((*str), tmp);
      
      free(tmp);
    } else {
      (*str) = my_strcat((*str), ins);
    }
    /*
    for (x = 0, y = 0 ; x < n && y < n + 1 ; x++, y++) {
      if (y == i)
	(*s)[y++] = c;
      (*s)[y] = tmp[x];
    }
    
    if (y < n + 1)
      (*s)[y++] = c;
    
    (*s)[y] = '\0';
    */
  }
}
