#include "monty.h"
/**
 *free_stack_t - free top of the stack
 *@top: top of stack or head of stack
 *
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
