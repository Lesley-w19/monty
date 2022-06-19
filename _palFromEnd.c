#include "monty.h"

/**
 * _palFromEnd - a function that displays linked list from the end.
 * @stack: the first node.
 *
 * Return: returns nothing
 */

void _palFromEnd(stack_t **stack)
{
	stack_t *tmp = *stack, *prev;

	if (tmp == NULL)
		return;

	while (tmp != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
	}

	if (prev != NULL)
	{
		while (prev != NULL)
		{
			printf("%d\n", prev->n);
			prev = prev->prev;
		}
	}
}
