#include "monty.h"

/**
 * _add -  a function that adds the top two elements of the stack.
 * @stack: the stack.
 * @line_number: line number of the monty file.
 *
 * Return: returns void.
 */

void _add(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *first = *stack, *next = NULL;
	int sm;

	if (*stack == NULL || _stackLen(*stack) <= 1)
		_errorHandler(ADD_STACK_TOO_SHORT);

	next = first->next;
	sm = first->n + next->n;
	_pop(stack, line_number);
	next->n = sm;
}
