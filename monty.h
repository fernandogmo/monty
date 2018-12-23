#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
 *@stack: global stack for opcode read-writes
 *@line: line allocated by getline
 *@file: file opened in main
 *Description: global variable
 */
typedef struct global_state
{
	stack_t   *stack;    /* global stack for opcode read-writes */
	char       *line;    /* line allocated by getline */
	FILE       *file;    /* file opened in main */
} state_t;

extern state_t global;


/* line handlers */
void exec_line_ops(char *line, size_t line_num);
void fetch_instruction(char *cmd, size_t line_num);

/* opcode handlers */
void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void _sub(stack_t **stack, unsigned int line_numner);
void _div(stack_t **stack, unsigned int line_number);
void _mul(stack_t **stack, unsigned int line_number);

/* memory management utils */
void free_at_exit(void);
void free_stack_t(stack_t *top);

#endif /*_MONTY_H_*/
