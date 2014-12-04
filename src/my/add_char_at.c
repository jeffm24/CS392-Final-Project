#include "my.h"
/*
 * Author: Jeff Mariconda
 * Class: CS-392
 *
 * Pre: Takes a pointer to the address of the string, a char to add, and an index to 
 *      add it at.
 * Post: Reallocates the string and adds the char at the given index.
 */
void add_char_at(char **s, char c, unsigned int i)
{
  char *tmp;
  unsigned int x, y, n;

  if (s != NULL) {
    tmp = my_strdup(*s);
    n = my_strlen(tmp);
    free(*s);
    *s = xmalloc(n + 1);
    
    for (x = 0, y = 0 ; x < n && y < n + 1 ; x++, y++) {
      if (y == i)
	(*s)[y++] = c;
      (*s)[y] = tmp[x];
    }
    
    if (y < n + 1) {
      (*s)[y++] = c;
      (*s)[y] = '\0';
    }

    free(tmp);
  }
}
