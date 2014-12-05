#include "../../include/mynotsominishell.h"

void paste() {
	char *paste;
	paste = gl_env.clipboard;

	my_str(paste);
}