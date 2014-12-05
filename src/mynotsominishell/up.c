#include "../../include/mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Changes buffer to one previous in command history
 */

void up() {
  if (gl_env.currNode->prev != NULL) {
    gl_env.currNode = gl_env.currNode->prev;
    
    gl_env.size = my_strlen((char*)gl_env.currNode->elem);
    move_end();

    refresh_buff();
  }
}
