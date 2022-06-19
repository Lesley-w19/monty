#include "monty.h"

/**
 * _pall: is a function that prints all values on the stack.
 * @stack: is the stack.
 * @line_number: line number of the monty file.
 *
 * Return: returns nothing.
 */

void _pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	_palFromStart(stack);
}
