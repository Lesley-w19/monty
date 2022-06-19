#include "monty.h"

/**
 * _errorHandler - a function for error management.
 *
 * @prmErrorCode: is the error code.
 * 
 * Return: no return.
 */

void _errorHandler(int prmErrorCode)
{
	void (*func)();

	func = _getErrorFunction(prmErrorCode);

	if (func != NULL)
		func();

	_freeAppData();
	exit(EXIT_FAILURE);
}
