#include "monty.h"

/**
 * _calloc -  afunction that allocates memory for an array.
 * @prmNumber: the character number.
 * @prmSize: the size of one case.
 *
 * Return: return allocates memory and initializes it.
 */

void *_calloc(unsigned int prmNumber, unsigned int prmSize)
{
	void *ptr;

	if (prmNumber == 0 || prmSize == 0)
		return (NULL);

	ptr = malloc(prmSize * prmNumber);

	if (ptr == NULL)
		_errorHandler(MALLOC_FAILED);

	ptr = _memset(ptr, 0, prmNumber * prmSize);

	return (ptr);
}
