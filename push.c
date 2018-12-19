#include "monty.h"

/**
 *push - push new node to the end of the stack
 *@stack: double pointer to the head of the stack
 *@line_number: number of line in the file
 *
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	char *num;

	num = strtok(NULL, DELIMS);
	if (num == NULL)
	{
		printf("L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = malloc(sizeof(stack_t));
	if (tmp == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	tmp->n = atoi(num);
	tmp->prev = NULL;
	tmp->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = tmp;

	*stack = tmp;
}
