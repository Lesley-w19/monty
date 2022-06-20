#include "monty.h"

/**
 * _mod -  a function that finds the modulo of the top two elements
 * of the stack.
 * @stack: is the stack
 * @line_number: is the line_number of the monty file.
 *
 * Return: it returns void.
 */

void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *first = *stack, *next;
	int modulo;

	if (*stack == NULL || _stackLen(*stack) <= 1)
		_errorHandler(MOD_STACK_TOO_SHORT);

	if (first->n == 0)
		_errorHandler(NULLABLE_NUMBER);

	next = first->next;
	modulo = next->n % first->n;
	_pop(stack, line_number);
	next->n = modulo;
}
