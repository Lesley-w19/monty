#include "monty.h"

/**
 * _errorMulEmptyStack -a function that displays when stack is empty
 */

void _errorMulEmptyStack(void)
{
	fprintf(stderr, "L%d: can't mul, stack empty\n", appData->lineNumber);
}
