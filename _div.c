#include "monty.h"

/**
 * _div - div the top two elem of the stack
 *
 * @stack: stack
 *
 * @line_number: line number of monty file
 *
 * Return: void
**/

void _div(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *first = *stack, *next = NULL;
	int div;

	if (*stack == NULL || _stackLen(*stack) <= 1)
		_errorHandler(DIV_STACK_TOO_SHORT);

	next = first->next;

	if (first->n == 0)
		_errorHandler(NULLABLE_NUMBER);

	div = next->n / first->n;
	_pop(stack, line_number);
	next->n = div;
}
