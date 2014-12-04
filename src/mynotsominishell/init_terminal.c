#include "../../include/mynotsominishell.h"

void init_terminal()
{
  struct termio line;
  int fd;
  ioctl(fd,TCGETA,&line);

  gl_env.line_backup = line;
  line.c_lflag &= ~(ECHO | ISIG | ICANON);
  line.c_cc[VMIN] = READMIN;
  line.c_cc[VTIME] = READTIME;
  ioctl(0, TCSETA, &line);
}
