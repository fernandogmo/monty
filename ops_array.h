#ifndef __OPS_ARRAY_H__
#define __OPS_ARRAY_H__

instruction_t ops[] = {
	{"push", push},
	{"pall", pall},
	{"pint", pint},
	{"pop", pop},
	{"swap", swap},
	{"add", add},
	/*{"nop", nop},*/
	{NULL, NULL}
};

#endif /* __OPS_ARRAY_H__ */
