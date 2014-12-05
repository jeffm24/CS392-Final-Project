#include "../../include/mynotsominishell.h"

void cut_eol() {
  char *buff;
  char *start;
  buff = gl_env.currNode->elem;

  gl_env.clipboard = get_substring(buff, gl_env.pos, gl_env.size-1);

  gl_env.currNode->elem = get_substring(buff, 0, gl_env.pos - 1);
  refresh_buff();

  //my_str("CUT: ");
  //my_str(gl_env.clipboard);
}
