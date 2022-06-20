#include "monty.h"

/**
 * _errorDivEmptyStack -a function that displays when stack is empty
 */

void _errorDivEmptyStack(void)
{
	fprintf(stderr, "L%d: can't create div, stack empty\n", appData->lineNumber);
}
