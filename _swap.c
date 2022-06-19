#include "monty.h"

/**
 * _swap -  afunction tht swaps the top two elements of the stack.
 * @stack: is the stack.
 * @line_number: line number of the pnty file.
 *
 * Return: it returns void.
 *
 */

void _swap(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *first = *stack, *next = NULL;

	if (_stackLen(*stack) <= 1)
		_errorHandler(SWAP_STACK_TOO_SHORT);

	if (*stack == NULL)
		_errorHandler(SWAP_EMPTY_STACK);

	next = first->next;
	first->next = next->next;
	next->prev = NULL;
	next->next = first;
	*stack = next;
}
