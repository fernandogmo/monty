#include "monty.h"

void exec_line_ops(char *line, size_t line_num)
{
	char *cmd = NULL, *arg = NULL;

	cmd = strtok(line, DELIMS);
	arg = strtok(NULL, DELIMS);
	if (strcmp(cmd, "push") == 0)
	{
		stack_t *new = malloc(sizeof(new));
		if (!new)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_SUCCESS);
		}
		new->n = atoi(arg);
		new->prev = NULL;
		new->next = global.stack;
		if (global.stack)
			global.stack->prev = new;
		global.stack = new;
		printf("Pushing %d\n", global.stack->n);
	}
	else if (strcmp(cmd, "pall") == 0)
		pall(&global.stack, line_num);
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", (int)line_num, cmd);
		exit(EXIT_FAILURE);
	}
}
