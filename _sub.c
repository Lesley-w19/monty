#include "monty.h"

/**
 * _sub - a function that sub the top two elements of the  stack.
 * @stack: the stack.
 * @line_number: the line number in the monty file.
 *
 * Return: returns void.
 */

void _sub(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *first = *stack, *next;
	int sub;

	if (first == NULL || first->next == NULL)
		_errorHandler(SUB_STACK_TOO_SHORT);

	next = first->next;
	sub = next->n - first->n;
	next->n = sub;
	_pop(stack, line_number);
}
