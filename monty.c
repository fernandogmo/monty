#include "monty.h"

state_t global = {0, 0, NULL};

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
	atexit(free_at_exit);
	/* read every line in file and try executing it */
	while (getline(&line, &len, file) != -1)
		/* execute any valid commands on line */
		exec_line_ops(line, ++line_num);

	return (EXIT_SUCCESS);
}
