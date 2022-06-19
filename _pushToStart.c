#include "monty.h"

/**
 * _pushToStart - a fnction to push new stack at the start.
 * @stack: is the ead of the stack.
 *
 * Return: no return.
 */

void _pushToStart(stack_t **stack)
{
	stack_t *new;
	stack_t *i;

	new = NULL;
	i = *stack;

	_checkArguments();

	new = _createStack(_atoi(appData->arguments[1]));

	if (new == NULL)
		_errorHandler(MALLOC_FAILED);

	if (*stack == NULL)
	{
		*stack = new;
	}
	else
	{
		new->next = i;
		i->prev = new;
		*stack = new;
	}
}
