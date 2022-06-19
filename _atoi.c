#include "monty.h"

/**
 * _atoi - a function to convert a string to an integer.
 * @prmString: is the character pointer.
 *
 * Return: it returns an int.
 */

int _atoi(char *prmString)
{
	char sign = 1, current;
	int size = strlen(prmString), cLoop;
	unsigned int number = 0;

	for (cLoop = 0; cLoop < size; cLoop++)
	{
		current = prmString[cLoop];

		if (_isdigit(current))
		{
			number *= 10;
			number += current - 48;
		}
		else if (current == '-')
			sign = -sign;
		else if (number > 0)
			break;
	}

	return (sign * number);
}
