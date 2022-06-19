#include "monty.h"

/**
 * _checkEmptyLine - check empty line
 *
 * @prmLine: string
 *
 * Return: 1 if success
 */
int _checkEmptyLine(char *prmLine)
{
	char *tmp = prmLine;

	while (_inArray(*tmp, " \t\a\r\b\n") == 1)
		tmp += 1;

	if (*tmp == '\0')
		return (0);

	return (1);
}
