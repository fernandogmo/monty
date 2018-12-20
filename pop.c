#include "monty.h"

/**
 *pop - remove the top element of the stack
 *@stack: double pointer that point to the head of the stack
 *@line_number: number of line of the file
 *
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (*stack == NULL || stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	(*stack) = (*stack)->next;

	free(tmp);
}
