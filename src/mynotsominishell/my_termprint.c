#include "../../include/mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Prints character to terminal.
 */

int my_termprint(int a) {
  return write(1, &a, 1);
}
