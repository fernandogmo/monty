#include "monty.h"
/**
 *_mul - mul the top 2 elements of the stack
 *@stack: double pointer that point to the head of stack
 *@line_number: the numner of line of the file
 *
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int result;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;

	result = tmp->next->n * tmp->n;
	tmp->next->n = result;

	*stack = tmp->next;

	free(tmp);
}
