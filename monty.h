#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>


#define DELIMS " \n\r\t"



/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;



/**
 *struct global_state - global variable
 *@top: element at the top node
 *@capacity: current number of nodes
 *@stack: global stack for opcode read-writes
 *Description: global variable
 */
typedef struct global_state
{
	int     top;      /* data in top node */
	size_t  capacity; /* current number of nodes */
	stack_t *stack;    /* global stack for opcode read-writes */
} state_t;


extern state_t global;

/* opcode handlers */
void exec_line_ops(char *line, size_t line_num);
void fetch_instruction(char *cmd, size_t line_num);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_numner);

#endif /*_MONTY_H_*/
