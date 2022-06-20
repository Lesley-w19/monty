#include "monty.h"

/**
 * _pchar -  afunction that prints the char at the top of the stack.
 * @stack: the stack.
 * @line_number: the line number of the monty file.
 *
 * Return: returns void.
 */

void _pchar(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *first = *stack;

	if (*stack == NULL)
		_errorHandler(PCHAR_EMPTY_STACK);

	if (_stackLen(*stack) < 1)
		_errorHandler(PCHAR_STACK_TOO_SHORT);


	if (first->n < 0 || first->n > 127)
		_errorHandler(PCHAR_OUT_OF_RANGE);

	printf("%c\n", first->n);
}
