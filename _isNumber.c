#include "monty.h"

/**
 * _isNumber - a function that checks if a string is a number.
 * @s: is the string to verify.
 *
 * Return: returns 1 is the string is a number.
 */

int _isNumber(char *s)
{
	char *st = s;

	if (st == NULL)
		return (0);
	if (*st == '\0' || *st == '\n')
		return (1);
	if (!_isdigit(*st))
		return (0);
	else
		return (_isNumber(st + 1));
}
