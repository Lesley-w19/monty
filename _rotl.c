#include "monty.h"

/**
 * rotl - a function that rotates the stack to the top.
 * @stack: the stack
 * @line_number: line number of monty file.
 *
 * Return: return void.
 */

void _rotl(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	int swap;
	stack_t *tmp = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	swap = tmp->n;

	while (tmp->next != NULL)
	{
		tmp->n = tmp->next->n;
		tmp = tmp->next;
	}
	tmp->n = swap;
}
