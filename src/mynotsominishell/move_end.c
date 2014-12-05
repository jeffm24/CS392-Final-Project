#include "mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Moves the cursor to the end of the buffer.
 */
void move_end()
{
  while (gl_env.pos < gl_env.size) 
    curight();
}
