#include "monty.h"

/**
 * _stackLen -  afunction that calc the number of nodes in a stack.
 * @stack: the stack.
 *
 * Return: it returns the length.
 */

int _stackLen(stack_t *stack)
{
	if (stack == NULL)
		return (0);
	return (_stackLen(stack->next) + 1);
}
