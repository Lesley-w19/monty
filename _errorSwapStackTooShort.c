#include "monty.h"

/**
 * _errorSwapStackTooShort -a function that displays when stack is too short
 */

void _errorSwapStackTooShort(void)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", appData->lineNumber);
}
