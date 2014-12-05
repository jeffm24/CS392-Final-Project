#include "../../include/mynotsominishell.h"

void culeft()
{  
  if(gl_env.pos > 0) {
    tputs(gl_env.culeft, 1, my_termprint);
    gl_env.pos--;
  }
}
