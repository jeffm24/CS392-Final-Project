#include "mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Restores the terminal and exits the shell.
 */
void getout()
{
  restore_terminal();
  exit(0);
}
