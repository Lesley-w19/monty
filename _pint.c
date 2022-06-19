#include "monty.h"

/**
 * _pint - is a function that prits the value at the top of the stack.
 * @stack: the stack.
 * @line_number: the line number of the monty file.
 *
 * Return: returns void.
 */

void _pint(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	if (*stack == NULL)
	{
		_errorHandler(PINT_EMPTY_STACK);
	}

	printf("%d\n", (*stack)->n);
}
