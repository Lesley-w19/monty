#include "monty.h"

/**
 * _push - a function to push an element to the stack.
 *
 * @stack: is the stack.
 * @line_number: the line number of the monty file.
 *
 * Return: no return.
 */


void _push(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	switch (appData->way)
	{
		case FIFO:
			_pushToEnd(stack);
			break;
		case LIFO:
		default:
			_pushToStart(stack);
			break;
	}
}
