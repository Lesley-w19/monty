#include "monty.h"

/**
 * _memcpy -  a function that copies bytes from memory area src to
 * memeory area dest
 * @prmDest: the pointer to memory area
 * @prmSrc: pointer to the src memory area.
 * @prmLimit: the number of bytes to fill.
 *
 * Return: returns the pointer to dest.
 */

char *_memcpy(char *prmDest, char *prmSrc, unsigned int prmLimit)
{
	unsigned int cLoop;

	for (cLoop = 0; cLoop < prmLimit; cLoop++)
	{
		prmDest[cLoop] = prmSrc[cLoop];
	}

	return (prmDest);
}
