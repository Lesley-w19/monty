#include "monty.h"

/**
 * _pop -  a function that remove the top element of the stack.
 * @stack: the stack.
 * @ine_number: is the line number of the monty file.
 *
 * Return: returns void.
 */

void _pop(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *next;

	if (*stack == NULL)
		_errorHandler(POP_EMPTY_STACK);

	next = (*stack)->next;
	free(*stack);
	*stack = next;
}
