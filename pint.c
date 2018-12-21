#include "monty.h"

/**
 *_pint - print the value at the top of the stack
 *@stack: double pointer to the head of the stack
 *@line_number: the number of line of the file
 *
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
