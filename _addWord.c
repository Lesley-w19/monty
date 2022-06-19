#include "monty.h"

/**
 * _addWord: function that adds a word to an array.
 *
 * @prmWord: is the word to add.
 * @prmIndex: is the current index.
 * @prmArray: is the array.
 */

void _addWord(char *prmWord, int *prmIndex, char **prmArray)
{
	prmWord = _cleanString(prmWord);
	prmArray[*prmIndex] = strdup(prmWord);
	free(prmWord);
	*prmIndex += 1;
}
