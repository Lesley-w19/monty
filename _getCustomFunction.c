#include "monty.h"

/**
 * _getCustomFunction - check custom command
 *
 * @prmCommand: command
 *
 * Return: pointer function
 */

void (*_getCustomFunction(char *prmCommand))(stack_t **, unsigned int)
{
	int i = 0;

	instruction_t fp[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"pchar", _pchar},
		{"mod", _mod},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{"pstr", _pstr},
		{"nop", _nop},
		{"queue", _queue},
		{"stack", _stack}
	};

	while ((fp + i)->opcode)
	{
		if (strcmp(prmCommand, (fp + i)->opcode) == 0)
			return ((fp + i)->f);
		i++;
	}

	return (NULL);
}
