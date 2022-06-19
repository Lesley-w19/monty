#include "main.h"

/**
 * _freeStackList - function that frees a struct linked list.
 * @prmHeadNode: is the first element.
 *
 * Return: it returns a list_t list.
 */

void _freeStackList(stack_t *prmHeadNode)
{
	if (prmHeadNode == NULL)
		return;
	_freeStackList(prmHeadNode->next);
	free(prmHeadNode);
	prmHeadNode = NULL;
}
