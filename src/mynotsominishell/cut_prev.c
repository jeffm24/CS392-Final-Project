#include "../../include/mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Cuts one word previous to the cursor.
 */

void cut_prev() 
{
  char *buff;
  int prevPos;

  buff = (char*)gl_env.currNode->elem;
  prevPos = gl_env.pos;

  while (buff[gl_env.pos] != ' ' && gl_env.pos > 0)
    culeft();
  
  if (gl_env.pos == 0) {
    gl_env.clipboard = get_substring(buff, 0, prevPos - 1);
    remove_substring((char**)&gl_env.currNode->elem, 0, prevPos - 1);
  } else {
    gl_env.clipboard = get_substring(buff, gl_env.pos + 1, prevPos - 1);
    remove_substring((char**)&gl_env.currNode->elem, gl_env.pos + 1, prevPos - 1);
  }  

  gl_env.size -= (prevPos - gl_env.pos - 1);
  
  refresh_buff();
}
