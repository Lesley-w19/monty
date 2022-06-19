#include "monty.h"

/**
 * _realloc -  a function that reallocates memory block using malloc and free.
 * @prmPtr: is the source pointer.
 * @prmOldSize: is in tpointer size.
 * @prmNewSize: is out pointer size.
 *
 * Return: returns the reallocate pointer.
 */

void *_realloc(void *prmPtr, unsigned int prmOldSize, unsigned int prmNewSize)
{
	void *s = prmPtr;

	if (prmPtr == NULL)
	{
		s = malloc(prmNewSize);

		if (s == NULL)
			_errorHandler(MALLOC_FAILED);
		return (s);
	}
	if (prmNewSize == prmOldSize)
		return (prmPtr);
	if (prmNewSize == 0)
	{
		free(prmPtr);
		return (NULL);
	}

	s = malloc(prmNewSize);

	if (s == NULL)
		_errorHandler(MALLOC_FAILED);

	s = _memcpy(s, prmPtr, prmOldSize);
	free(prmPtr);

	return (s);
}
