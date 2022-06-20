#include "monty.h"

/**
 * _errorDivStackTooShort - a function that displays when stack is too short
 */

void _errorDivStackTooShort(void)
{
	fprintf(stderr, "L%d: can't div, stack too short\n", appData->lineNumber);
}
