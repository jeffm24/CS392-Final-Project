#include "../../include/mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Cuts one word previous to the cursor.
 */

void cut_prev() {
  char *cut;
  char *buff;
  char *snippet;
  int space;
  buff = gl_env.currNode->elem;
  snippet = get_substring(buff, 0, gl_env.pos);
  
  space = my_strrpos(snippet, ' ');
  
  if (space == -1)
    gl_env.clipboard = snippet;
  else
    gl_env.clipboard = get_substring(buff, space+1, gl_env.pos);
  
  gl_env.currNode->elem = get_substring(buff, 0, space);
  refresh_buff();
}
