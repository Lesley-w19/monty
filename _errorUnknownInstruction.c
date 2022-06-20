#include "monty.h"

/**
 * _errorUnknownInstruction -a function that displays when unknown instruction is found
 */

void _errorUnknownInstruction(void)
{
	fprintf(
		stderr,
		"L%d: unknown instruction %s\n",
		appData->lineNumber,
		appData->arguments[0]
	);
}
