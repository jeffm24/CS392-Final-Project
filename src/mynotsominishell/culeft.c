#include "../../include/mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Moves the cursor one space to the left.
 */

void culeft()
{  
  if(gl_env.pos > 0) {
    tputs(gl_env.culeft, 1, my_termprint);
    gl_env.pos--;
  }
}
