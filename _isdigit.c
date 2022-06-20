#include "monty.h"

/**
 * _isdigit - a function test if a character is a number.
 * @prmChar: is the character.
 *
 * Return: returns 1 is is true.
 */

int _isdigit(char prmChar)
{
	return (prmChar >= '0' && prmChar <= '9');
}
