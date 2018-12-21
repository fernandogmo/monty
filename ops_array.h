#ifndef __OPS_ARRAY_H__
#define __OPS_ARRAY_H__

instruction_t ops[] = {
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

#endif /* __OPS_ARRAY_H__ */
