#include "monty.h"

/**
 * _errorAddStackTooShort -a function that displays when stack is too short
 */

void _errorAddStackTooShort(void)
{
	fprintf(stderr, "L%d: can't add, stack too short\n", appData->lineNumber);
}
