#include "../../include/mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Cuts from cursor to end of the line.
 */

void cut_eol() {
  
  char *buff;
  char *start;
  int trunc_size;
  
  buff = (char*)gl_env.currNode->elem;
  trunc_size = my_strlen(get_substring(buff, 0, gl_env.pos - 1));
  gl_env.clipboard = get_substring(buff, gl_env.pos, gl_env.size);
  gl_env.clipboard[trunc_size] = '\0';

  remove_substring((char**)&gl_env.currNode->elem, gl_env.pos, gl_env.size);

  gl_env.size = trunc_size;
  while (gl_env.pos < gl_env.size)
    curight();
  
  refresh_buff();

  
  

  //my_str("CUT: ");
  //my_str(gl_env.clipboard);
  //my_str("SIZE OF BUFF: ");
  //my_int(gl_env.size);

}
