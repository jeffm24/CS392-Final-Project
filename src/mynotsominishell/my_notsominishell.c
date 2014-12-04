#include "mynotsominishell.h"

/*
 * Class: CS392
 * 
 * A basic shell for running termnial commands.
 */
int main() 
{
  char **v;
  char cwd[1024];
  int pid;
  int i;
  
  buff = xmalloc(READMIN + 3);

  init_caps();
  init_terminal();
  gl_env.flag = 0;

  gl_env.currNode = new_node("");
  gl_env.size = my_strlen((char*)currNode->elem);
  gl_env.pos = 0;  

  my_str("\n--------------Welcome to the Not-So-Minishell--------------\n\n");
  while (1) {
    my_str(getcwd(cwd, sizeof(cwd)));
    my_str("> ");

    if (read(0, gl_env.buff, READMIN + 3) < 0) {
      my_str("\nREAD FAILED.\n\n");
      getout();
    } 
    check(gl_env.buff);
  }
  
  return 0;
}
