#include "../../include/mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Pastes cut text.
 */

void paste()
{    
  unsigned int i, n;
  
  if (gl_env.clipboard != NULL) {
    n = my_strlen(gl_env.clipboard);
    
    insert_str_at((char**)&gl_env.currNode->elem, gl_env.clipboard, gl_env.pos);
  
    gl_env.size += n - 2;
    for (i = 0 ; i < n ; i++)
      curight();

    refresh_buff();
  }
}
