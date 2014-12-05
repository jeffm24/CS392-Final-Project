#include "my.h"
/*
 * Author: Jeff Mariconda
 * Class: CS-392
 *
 * Pre: Takes a pointer to the address of the string, a start index, and an end index for the substring.
 * Post: Removes the substring from the string.
 */
void remove_substring(char **str, unsigned int s, unsigned int f)
{
  //char *tmp;
  char tmp[256];
  unsigned int x, n;

  if (*str != NULL) {
    n = my_strlen(*str);
    
    if (s < n) {
      //tmp = (char*)xmalloc(n);
      
      //tmp = my_strncpy(tmp, (*str), s);

      for (x = 0 ; x < s ; x++) 
	tmp[x] = (*str)[x];
      
      //tmp[s] = '\0';
      //tmp = my_strcat(tmp, get_substring((*str), f + 1, n));
      
      for (f += 1 ; f < n ; x++, f++)
	tmp[x] = (*str)[f];
      tmp[x] = '\0';
      
      //(*str) = my_strcpy((*str), tmp);
      
      for (x = 0 ; tmp[x] != '\0' ; x++) 
	(*str)[x] = tmp[x];
      (*str)[x] = '\0';

      //free(tmp);
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
