#include "monty.h"

/**
 * _errorAddEmptyStack -a function that displays when stack is empty
 */

void _errorAddEmptyStack(void)
{
	fprintf(stderr, "L%d: can't add, stack empty\n", appData->lineNumber);
}
