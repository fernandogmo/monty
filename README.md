# Monty

Monty is a simple interpreter for the bytecode of Monty 0.98, a fictional scripting language described in a Holberton School project meant to introduce students to stacks and queues.

The Monty interpreter interprets files containing Monty stack-based bytecode. By convention, these files end with a `.m` extension and, by specification, each line contains zero or one opcode followed by zero or more arguments separated by whitespace.

## Setup
Clone our repository and compile from the repos root directory with the command:
```shell
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

**Note: We've tested this code using `gcc-4.8` and `Ubuntu 14.04`.**

## Language Features

| Command  | Description             |
| -------- | ------------------------|
| push | push a command to the stack |
| pall | print all values of the stack |
| pint | print value of top of stack |
| pop | remove the top of the stack|
| swap | swap the top 2 elements of the stack |
| add | add the top 2 elements of the stack |
| nop | an opcode that does nothing |
| sub | subtracts top element from 2nd to top element |
| div | divides the second top element of the stack by the top element |
| mul | multiplies the second top element of the stack with the top element |
| mod | computes the rest of the division of the second top element of the stack by the top element |
| pchar | prints the char at the top of the stack |
| pstr | prints the string starting at the top of the stack |
| rotr | rotates the stack to the bottom |
| rotl | rotates the stack to the top |
| stack | sets the format of the data to a stack (LIFO) |
| queue | sets the format of the data to a queue (FIFO) |
| Comments | handles the # character as comments |


<center>.	.	.</center>


## A Holberton School group project

##### Some Holberton School rules we followed when implementing this project:
- Student's code should adhere the Betty style (a `Holberton School`-specific style).
 - It will be checked using `betty-style.pl` and `betty-doc.pl`
- Students are allowed to use a maximum of one global variable.
- No more than 5 functions per file.
- The prototypes of all your functions should be included in your header file called monty.h
- All header files should be "include guarded".
- Features had to be added in the order shown on the intranet project page.

##### At the end of this project, we were required to demonstrate understanding of these concepts:
- What do LIFO and FIFO mean
- What is a stack, and when to use it
- What is a queue, and when to use it
- What are the common implementations of stacks and queues
- What are the most common use cases of stacks and queues
- What is the proper way to use global variables
- How to work with git submodules

##### AUTHORS: Fernando Gonzalez-Morales and Thang Nguyen
