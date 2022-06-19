#include "monty.h"

/**
 * _cleanString -  a function that erases begin spaces and 
 * ending spaces from a string.
 * @prmString: is the string to clean.
 *
 * Return: returns a clean string.
 */

char *_cleanString(char *prmString)
{
	int cLoopStart = 0, cLoopEnd = 0, size = 0;
	char *string;

	if (prmString == NULL)
		return (NULL);

	size = strlen(prmString);

	while (_inArray(prmString[cLoopStart], " ") == 1)
		cLoopStart++;

	cLoopEnd = size - 1;
	while (_inArray(prmString[cLoopEnd], " ") == 1)
		cLoopEnd--;
	cLoopEnd = size - 1 - cLoopEnd;

	string = _calloc(sizeof(char), size - cLoopStart - cLoopEnd + 1);
	strncpy(string, (prmString + cLoopStart), size - cLoopStart - cLoopEnd);
	string[size - cLoopStart - cLoopEnd] = '\0';

	/**prmString = *string;*/
	prmString = _realloc(
		prmString,
		size,
		sizeof(char) * (size - cLoopStart - cLoopEnd + 1)
	);

	if (prmString == NULL)
		_errorHandler(MALLOC_FAILED);
	strcpy(prmString, string);
	prmString[size - cLoopStart - cLoopEnd] = '\0';
	free(string);
	return (prmString);
}
