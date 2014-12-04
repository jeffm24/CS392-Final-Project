#include "../../include/mynotsominishell.h"

int my_termprint(int a) {
  return write(1, &a, 1);
}
