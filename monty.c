#include "monty.h"

state_t global;
void exec_line_ops(char *line);

int main(int argc, char** argv)
{
	FILE *file = NULL;
	char *line = NULL;
	size_t len = 0;

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
	global.line_number = 0;
	while (getline(&line, &len, file) != -1)
	{
		global.line_number += 1;
		/* execute any valid commands on line */
		exec_line_ops(line);
	}

return (EXIT_SUCCESS);
}

void exec_line_ops(char *line)
{
	char *cmd = NULL, *arg = NULL;

	cmd = strtok(line, DELIMS);
	arg = strtok(NULL, DELIMS);
	if (strcmp(cmd, "push") == 0)
		printf("Pushing %d\n", atoi(arg));
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", global.line_number, cmd);
		exit(EXIT_FAILURE);
	}
}
