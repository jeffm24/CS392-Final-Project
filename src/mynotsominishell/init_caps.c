#include "mynotsominishell.h"

void init_caps() {
  char *term;
  char bp[2048];
  term = getenv("TERM");

  if(!term) {
    restore_terminal();
    my_str("ERROR: NOT-SO-MINI ERROR\n");
    my_str("GETTING GLOBAL ENV TERM FAILED\n");
    exit(1);
  }

  tgetent(bp, term);
  gl_env.clear = term_get_cap(CLEAR);
  gl_env.move = term_get_cap(MOVE);
  gl_env.left = term_get_cap(LEFT);
  gl_env.right = term_get_cap(RIGHT);
  gl_env.down = term_get_cap(DOWN);
  gl_env.up = term_get_cap(UP);
  gl_env.culeft = term_get_cap(CULEFT);
  gl_env.curight = term_get_cap(CURIGHT);
}
