#include "monty.h"

/**
 * _errorPcharEmptyStack -a function that displays when stack is empty
 */

void _errorPcharEmptyStack(void)
{
	fprintf(stderr, "L%d: can't pchar, stack empty\n", appData->lineNumber);
}
