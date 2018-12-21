#include "monty.h"

/**
 *free_at_exit - free allocated memory at exit
 *Description: free memory
 */
void free_at_exit(void)
{
	stack_t *free_it;
	stack_t *tmp = NULL;

	free_it = *global;

	while (free_it !=  NULL)
	{
		tmp = free_it->next;
		free(free_it);
		free_it = tmp;
	}
}
