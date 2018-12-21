#include "monty.h"

/**
 *_div - divide the second top element of stack
 *@stack: double pointer that point to the head of stack
 *@line_number: the number of the line in file
 *
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int result;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;

	if (tmp->n == 0) /* may need to add tmp->next->n = 0 condition */
	{
		printf("L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	result = tmp->next->n / tmp->n;
	tmp->next->n = result;

	*stack = tmp->next;

	free(tmp);
}
