#include "../../include/mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Clears everything behind the current line in the terminal.
 */
void clear() {
  char cwd[1024];

  tputs(gl_env.clear, 1, my_termprint);
  my_str(getcwd(cwd, sizeof(cwd)));
  my_str("> ");
  my_str((char*)gl_env.currNode->elem);
}
