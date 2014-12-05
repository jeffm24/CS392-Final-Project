#include "my.h"
/*
 * Author: Jeff Mariconda
 * Class: CS-392
 *
 * Pre: Takes a pointer to the address of the string and an index to remove the char at.
 * Post: Reallocates the string and removes the char at the given index.
 */
void remove_substring(char **str, unsigned int s, unsigned int f)
{
  char *tmp;
  unsigned int n;
  // unsigned int x, y, n;

  if (*str != NULL) {
    n = my_strlen(*str);
    
    if (s < n) {
      tmp = xmalloc(n + 1 - (f - s));

      tmp = my_strncpy(tmp, (*str), s);
      tmp = my_strcat(tmp, get_substring((*str), f + 1, n));
      (*str) = my_strcpy((*str), tmp);
      
      free(tmp);
    }
    /*
    for (x = 0, y = 0 ; x < n && y < n - 1 ; x++, y++) {
      if (x == i)
	x++;
      (*s)[y] = tmp[x];
    }
    (*s)[y] = '\0';
    */
  }
}
