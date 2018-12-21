#include "monty.h"
/**
 *_swap - swap the top 2 element in stack
 *@stack: double pointer to the head of stack
 *@line_number: number of line in file
 *
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->next;

	(*stack)->prev = tmp;
	(*stack)->next = tmp->next;

	tmp->prev = NULL;

	if (tmp->next != NULL)
		tmp->next->prev = *stack;

	tmp->next = *stack;

	*stack = tmp;
}
