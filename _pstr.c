#include "monty.h"

/**
 * _pstr -  a function that prints a string starting at the top of the stack.
 * @stack: the stack.
 * @line_number: is the line number in the monty file
 * 
 * Return: returns void.
 */

void _pstr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *tmp = *stack;

	if (!tmp)
	{
		printf("\n");
		return;
	}

	while (tmp)
	{
		if ((tmp->n < 0 || tmp->n > 127) || tmp->n == 0)
			break;

		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");
}
