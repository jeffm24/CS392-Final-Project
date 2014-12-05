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
  char buff[READMIN + 3];
  int pid;
  int i;

  init_caps();
  init_terminal();
  gl_env.flag = 0;

  gl_env.currNode = new_node("");
  gl_env.currNode->elem = xmalloc(1);
  ((char*)gl_env.currNode->elem)[0] = '\0';
  gl_env.size = my_strlen((char*)gl_env.currNode->elem);
  gl_env.pos = 0;  

  my_str("\n--------------Welcome to the Not-So-Minishell--------------\n\n");
  my_str(getcwd(cwd, sizeof(cwd)));
  my_str("> ");
  while (1) {
    if (read(0, buff, READMIN + 3) < 0) {
      my_str("\nREAD FAILED.\n\n");
      getout();
    } 
    check(buff);
  }
  
  return 0;
}
