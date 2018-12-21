#include "monty.h"

/**
 *free_at_exit - free allocated memory at exit
 *Description: free memory
 */
void free_at_exit(void)
{
	free_stack_t(global.stack);
	fclose(global.file);
	if (global.line)
		free(global.line);
}
