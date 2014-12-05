#include "mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Moves the cursor to the start of the buffer.
 */
void move_start()
{
  while (gl_env.pos > 0)
    culeft();
}
