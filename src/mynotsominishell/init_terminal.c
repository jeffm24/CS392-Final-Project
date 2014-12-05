#include "mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Initializes terminal.
 */

void init_terminal()
{
  struct termio line;
  char *name;
  int fd;
  
  ioctl(0, TCGETA, &line);
  gl_env.line_backup = line;
  
  line.c_lflag &= ~(ECHO | ISIG | ICANON);
  line.c_cc[VMIN] = READMIN;
  line.c_cc[VTIME] = READTIME;
  ioctl(0, TCSETA, &line);

  name = ttyname(0);
  fd = open(name, O_WRONLY);

  gl_env.stdio_backup = dup(1);
  dup2(fd, 1);
}

