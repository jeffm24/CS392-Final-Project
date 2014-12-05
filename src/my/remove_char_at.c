#include "my.h"
/*
 * Author: Jeff Mariconda
 * Class: CS-392
 *
 * Pre: Takes a pointer to the address of the string and an index to remove the char at.
 * Post: Reallocates the string and removes the char at the given index.
 */
void remove_char_at(char **s, unsigned int i)
{
  char *tmp;
  unsigned int x, y, n;

  if (s != NULL) {
    tmp = my_strdup(*s);
    n = my_strlen(tmp);
    *s = xmalloc(n - 1);
    
    for (x = 0, y = 0 ; x < n && y < n - 1 ; x++, y++) {
      if (x == i)
	x++;
      (*s)[y] = tmp[x];
    }
    (*s)[y] = '\0';
  }
}
