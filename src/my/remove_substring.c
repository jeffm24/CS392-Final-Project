#include "my.h"
/*
 * Author: Jeff Mariconda
 * Class: CS-392
 *
 * Pre: Takes a pointer to the address of the string, a start index for the substring, and an end index for the substring.
 * Post: Removes the substring from the string.
 */
void remove_substring(char **str, unsigned int s, unsigned int f)
{
  char tmp[256];
  unsigned int x, n;

  if (*str != NULL) {
    n = my_strlen(*str);
    
    if (s < n) {
      for (x = 0 ; x < s ; x++) 
	tmp[x] = (*str)[x];

      for (f += 1 ; f < n ; x++, f++)
	tmp[x] = (*str)[f];
      tmp[x] = '\0';
       
      for (x = 0 ; tmp[x] != '\0' ; x++) 
	(*str)[x] = tmp[x];
      (*str)[x] = '\0';
    }
  }
}
