#include "monty.h"
#include <string.h>

/**
 * _addWord - add a word to an array
 *
 * @prmWord: word to add
 * @prmIndex: current index
 * @prmArray: array
 */

void _addWord(char *prmWord, int *prmIndex, char **prmArray)
{
	unsigned int  word;

	prmWord = _cleanString(prmWord);
	word = strup(prmWord);
	prmArray[*prmIndex] = word;
	free(prmWord);
	*prmIndex += 1;
}
