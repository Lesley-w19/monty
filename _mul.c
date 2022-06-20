#include "monty.h"

/**
 * _mul - a function that adds the top two element
 * @stack: the stack
 * @line_number: the line number of the monty file.
 *
 * Return: returns void.
 */

void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *first = *stack, *next;
	int mul;

	if (*stack == NULL || (*stack)->next == NULL)
		_errorHandler(MUL_STACK_TOO_SHORT);

	next = first->next;
	mul = first->n * next->n;
	_pop(stack, line_number);
	next->n = mul;
}
