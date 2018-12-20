#include "monty.h"
/**
 *
 *
 *
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int sum;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;

	sum = tmp->n + tmp->next->n;
	tmp->next->n = sum;

	*stack = tmp->next;

	free(tmp);
}
