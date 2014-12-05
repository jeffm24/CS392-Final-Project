#include "my.h"
/*
 * Author: Jeff Mariconda
 * Class: CS-392
 *
 * Pre: Takes a string, start index, finish index.
 * Post: Gets the substring from the start to finish inclusive.
 */
char *get_substring(char *str, unsigned int s, unsigned int f)
{
  char *sub;
  unsigned int i, n;

  if (str != NULL) {
    sub = xmalloc(f - s);
    n = my_strlen(str);
    for (i = 0 ; s < f + 1 && s < n ; i++, s++)
      sub[i] = str[s];
    sub[i] = '\0';
  }
  return sub;
}
