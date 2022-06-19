#include "monty.h"

/**
 * _memset -  a function that fills the first n bytes of the memory
 * area pointed to by s with the constant byte b.
 * @prmString: the pointer to the memory area.
 * @prmCharacter: is the constant.
 * @prmLimit: is the number of bytes to fill.
 *
 * Return: writes n bytes of value b.
 */

char *_memset(char *prmString, char prmCharacter, unsigned int prmLimit)
{
	unsigned int cLoop;

	for (cLoop = 0; cLoop < prmLimit; cLoop++)
	{
		prmString[cLoop] = prmCharacter;
	}

	return (prmString);
}
