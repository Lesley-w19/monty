#include "monty.h"

/**
 * _errorInvalidArgumentFormat - a function that displays
 *  when wrong argument found
 */

void _errorInvalidArgumentFormat(void)
{
	fprintf(stderr, "L%d: usage: push integer\n", appData->lineNumber);
}
