#include "monty.h"

state_t global = {0, 0, NULL};
void exec_line_ops(char *line, size_t line_num);

int main(int argc, char** argv)
{
	FILE *file = NULL;
	char *line = NULL;
	size_t len = 0, line_num = 0;

	/* Check that exactly one file argument was given */
	if (argc != 2)
	{
		fputs("USAGE: monty file\n",stderr);
		exit(EXIT_FAILURE);
	}

	/* Try to open the file */
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	/* read every line in file and try executing it */
	while (getline(&line, &len, file) != -1)
		/* execute any valid commands on line */
		exec_line_ops(line, ++line_num);

	return (EXIT_SUCCESS);
}

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
