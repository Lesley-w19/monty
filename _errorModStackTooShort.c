#include "monty.h"

/**
 * _errorModStackTooShort -a function that displays when stack is too short
 */

void _errorModStackTooShort(void)
{
	fprintf(stderr, "L%d: can't mod, stack too short\n", appData->lineNumber);
}
