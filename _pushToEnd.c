#include "monty.h"

/**
 * _pushToEnd - a function that pushes new stack at th end of the stack.
 * @stack: is the head of the stack.
 *
 * Return: returns nothing.
 */

void _pushToEnd(stack_t **stack)
{
	stack_t *new;
	stack_t *tmp;

	new = NULL;
	tmp = *stack;

	_checkArguments();

	new = _createStack(_atoi(appData->arguments[1]));

	if (new == NULL)
		_errorHandler(MALLOC_FAILED);

	if (*stack == NULL)
	{
		new->prev = NULL;
		*stack = new;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		new->prev = tmp;
		tmp->next = new;
	}
}
