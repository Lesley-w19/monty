#include "monty.h"

/**
 * _palFromStart - a function that displays linked list from the start
 * @stack: the first node.
 */

void _palFromStart(stack_t **stack)
{
	stack_t *i = *stack;

	if (i == NULL)
		return;

	while (i != NULL)
	{
		printf("%d\n", i->n);
		i = i->next;
	}
}
