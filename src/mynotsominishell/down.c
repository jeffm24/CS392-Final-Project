#include "../../include/mynotsominishell.h"

void down() {
if (gl_env.currNode->next != NULL) {
	t_node *temp;
	temp = gl_env.currNode;

	gl_env.currNode = temp->next;

	gl_env.size = my_strlen((char*)gl_env.currNode->elem);
	}
}