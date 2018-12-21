#include "monty.h"
/**
 *pall - print all the values from the stack
 *@stack: double pointer point to the head of stack
 *@line_number: the number of line of the file
 *
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	(void) line_number;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
