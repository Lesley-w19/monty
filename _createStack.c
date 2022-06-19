#include "monty.h"

/**
 * _createStack - a function that creates a node.
 * @prmNumber: node->n
 *
 * Return: returns address of node or 1 if error.
 */

stack_t *_createStack(int prmNumber)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));

	if (new == NULL)
		_errorHandler(MALLOC_FAILED);

	new->n = prmNumber;
	new->next = NULL;
	new->prev = NULL;

	return (new);
}

