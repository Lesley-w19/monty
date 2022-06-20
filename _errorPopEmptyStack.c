#include "monty.h"

/**
 * _errorPopEmptyStack -a function that displays when stack is empty
 */

void _errorPopEmptyStack(void)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", appData->lineNumber);
}
