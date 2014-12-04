#include "../../include/mynotsominishell.h"

void restore_terminal() {
  ioctl(0, TCSETA, &(gl_env.line_backup));
}
