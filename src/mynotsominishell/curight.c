#include "../../include/mynotsominishell.h"

void curight() {
  if (gl_env.pos < gl_env.size) {
    tputs(gl_env.curight, 1, my_termprint);
    gl_env.pos++;
  }
}
