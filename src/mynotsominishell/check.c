#include "mynotsominishell.h"
/*
 *
 *
 *
 *
 */
void check(char *in)
{
  char **v;

  if (in != NULL) {
    if (my_strcmp(in, KR) == 0 && gl_env.flag != 1) {
      //right
      right();
    } else if (my_strcmp(in, KL) == 0 && gl_env.flag != 1) {
      //left
      left();
    } else if (my_strcmp(in, KU) == 0 && gl_env.flag != 1) {
      //up
      up();
    } else if (my_strcmp(in, KD) == 0 && gl_env.flag != 1) {
      //down
      down();
    } else if (*in == 1 && gl_env.flag != 1) {
      //ctrl-a
      move_start();
    } else if (*in == 4 && gl_env.flag != 1) {
      //ctrl-d
      delete();
    } else if (*in == 5 && gl_env.flag != 1) {
      //ctrl-e
      move_end();
    } else if (*in == 11 && gl_env.flag != 1) {
      //ctrl-k
      cut_eol();
    } else if (*in == 12 && gl_env.flag != 1) {
      //ctrl-l
      clear();
    } else if (*in == 23 && gl_env.flag != 1) {
      //ctrl-w
      cut_prev();
    } else if (*in == 25 && gl_env.flag != 1) {
      //ctrl-y
      paste();
    } else if (*in == '\b' && gl_env.flag != 1) {
      //backspace
      backspace();
    } else if (my_strcmp(in, "\E") == 0) {
      //escape
      getout();
    } else if (my_strcmp(in, "\n") == 0) {
      v = my_str2vect((char*)gl_env.currNode->elem);

      archive_buff();
      
      if (my_strcmp(v[0], "cd") == 0) {
	if(chdir(v[1]) != 0)
	  my_str("\nInvalid path argument.\n\n");
      } else if (my_strcmp(v[0], "exit") == 0) {
	my_str("\nThanks for using the Not-So-Minishell. Have a nice day.\n");
	my_str("---------------------------------------------------------------\n\n");
	getout();
      } else {

	if ((pid = fork()) < 0) {
	  my_str("\nFORK FAILED.\n\n");
	  getout();
	} else if (pid == 0) {
	  my_char('\n');
	  if (execvp(v[0], v) < 0)
	    my_str("\nInvalid command.\n\n");
	  my_freevect(v);
	  exit(0);
	} else {
	  wait();
	  my_freevect(v);
	}
	
      }
    }
      
  }
}
