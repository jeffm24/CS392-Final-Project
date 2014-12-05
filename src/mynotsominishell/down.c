#include "../../include/mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Changes buffer to one more recent in command history
 */

void down() {
  if (gl_env.currNode->next != NULL) {
    gl_env.currNode = gl_env.currNode->next;
    
    gl_env.size = my_strlen((char*)gl_env.currNode->elem);
    move_end();
    
    refresh_buff();
  }
}
