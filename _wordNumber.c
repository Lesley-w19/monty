#include "monty.h"

/**
 * _wordNumber -  a function that returns word number.
 * @prmString: is the char pointer.
 * @prmSeperators: seperators.
 *
 * Return: returns the word Number.
 */

int _wordNumber(char *prmString, char *prmSeparators)
{
	int cLoop = 0, count = 0;

	while (prmString[cLoop] != '\0')
	{
		if (
			(
				_inArray(prmString[cLoop], prmSeparators) != 1 ||
				prmString[cLoop] != '\0'
			 ) &&
			(
				_inArray(prmString[cLoop + 1], prmSeparators) == 1 ||
				prmString[cLoop + 1] == '\0'
			)
		)
			count++;
		cLoop++;
	}

	return (count);
}
