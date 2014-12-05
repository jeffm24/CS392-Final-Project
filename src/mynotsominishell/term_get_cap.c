#include "mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Gets the terminal capability that corresponds to input string
 */

char* term_get_cap(char* cap)
{
  char* s;
  char a[2048];
  
  s = tgetstr(cap,(char**)&a);

  if(!s) {
    restore_terminal();
    my_str("ERROR: TERM_GET_CAP\n");
    exit(1);
  }
  else
    return s;
}
