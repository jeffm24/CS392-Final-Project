#include "../../include/mynotsominishell.h"
/*
 * Class: CS-392
 *
 * Pastes cut text.
 */

void paste() {
	char *paste;
	paste = gl_env.clipboard;

	my_str(paste);
}