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

/**
 *free_stack_t - free top of the stack
 *@top: top of the stack
 */
void free_stack_t(stack_t *top)
{
	stack_t *tmp;

	while (top != NULL)
	{
		tmp = top;
		top = top->next;
		free(tmp);
	}
}
