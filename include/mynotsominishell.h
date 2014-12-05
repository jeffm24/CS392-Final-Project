#ifndef _MY_NOTSOMINISHELL_H_
#define _MY_NOTSOMINISHELL_H_

#include "my.h"
#include "mylist.h"
#include <sys/ioctl.h>
#include <stdio.h>
#include <fcntl.h>
#include <termios.h>
#include <sys/termios.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <termcap.h>

#define READTIME 1
#define READMIN 3

#define KU "\E[A"
#define KD "\E[B"
#define KR "\E[C"
#define KL "\E[D"
#define UP "ku"
#define DOWN "kd"
#define LEFT "kl"
#define RIGHT "kr"
#define CLEAR "cl"
#define MOVE "cm" 
#define CULEFT "le"
#define CURIGHT "nd"

typedef struct	s_env
{
  char		*left;
  char		*right;
  char		*up;
  char		*down;
  char		*move;
  char		*clear;
  char          *culeft;
  char          *curight;
  struct winsize win;
  struct termio	line_backup;
  int		flag;
  int		stdio_backup;
  int		pos;
  int           size;
  t_node        *currNode;
}		t_env;

t_env	gl_env;

void init_terminal();
void restore_terminal();
char *term_get_cap(char*);
void init_caps();
int my_termprint(int);
void check(char*);
void refresh_buff();
void getout();
void archive_buff();
void move_cursor_to(int, int);

/* Commands: */
//void cut_eol();     //ctrl-k
//void paste();       //ctrl-y
//void cut_prev();    //ctrl-w
//void delete();      //ctrl-d
//void backspace();   
//void move_start();  //ctrl-a
//void move_end();    //ctrl-e
//void up();
//void down();
void clear();       //ctrl-L
void culeft();
void curight();

#endif
