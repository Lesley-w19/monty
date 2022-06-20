#include "monty.h"

/**
 * _errorPcharOutOfRange -a function that displays when number is out of range
 */

void _errorPcharOutOfRange(void)
{
	fprintf(
		stderr,
		"L%d: can't pchar, value out of the range\n",
		appData->lineNumber
	);
}
