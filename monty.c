#include "monty.h"
//#include <stdlib.h> /* EXIT_SUCCESS, EXIT_FAILURE, fputs */

int main(int argc, char** argv)
{
	(void)argv;

	if (argc != 2)
	{
		fputs("USAGE: monty file\n",stderr);
		exit(EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}

