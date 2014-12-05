#include "../../include/mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Cuts one word previous to the cursor.
 */

void cut_prev() 
{
  char *snippet;
  int sPos;

  snippet = get_substring(buff, 0, gl_env.pos);
  sPos = my_strrpos(snippet, ' ');
  
  if (sPos == -1) {
    gl_env.clipboard = snippet;
    
  } else {
    gl_env.clipboard = get_substring(buff, space+1, gl_env.pos);
  }

  remove_substring((char**)&gl_env.currNode->elem, 
  
  

  refresh_buff();
}
