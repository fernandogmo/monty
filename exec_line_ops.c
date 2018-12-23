#include "monty.h"

/**
 *exec_line_ops - read line
 *@line: line
 *@line_num: number of line
 */
void exec_line_ops(char *line, size_t line_num)
{
	char *cmd = strtok(line, DELIMS);

	if (cmd && cmd[0] != '#')
		fetch_instruction(cmd, line_num);
}

/**
 *fetch_instruction - get line
 *@cmd: command line
 *@line_num: number of line in file
 */
void fetch_instruction(char *cmd, size_t line_num)
{
	int i = 0;
	static const instruction_t ops[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{NULL, NULL}
	};

	for (; ops[i].opcode; ++i)
		if (strcmp(cmd, ops[i].opcode) == 0)
		{
			ops[i].f(&global.stack, line_num);
			return;
		}

	fprintf(stderr, "L%d: unknown instruction %s\n", (int)line_num, cmd);
	exit(EXIT_FAILURE);
}


