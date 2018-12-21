#include "monty.h"

/**
 *_push - push new node to the end of the stack
 *@stack: double pointer to the head of the stack
 *@line_number: number of line in the file
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	char *num;

	num = strtok(NULL, DELIMS);
	if (num == NULL || (!isdigit(num[0]) && num[0] != '-'))
	{
		printf("L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = atoi(num);
	new->prev = NULL;
	new->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new;

	*stack = new;
}
