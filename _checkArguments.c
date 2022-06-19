#include "monty.h"

/**
 * _checkArguments -  afunction that checks arguments.
 *
 * Return: returns 1 if success.
 */

int _checkArguments(void)
{
	if (appData->arguments[1] == NULL)
		_errorHandler(INVALID_ARGUMENT_FORMAT);

	if (strcmp(appData->arguments[0], "push") == 0)
	{
		if (appData->arguments[1][0] == '-')
		{
			if (_isNumber((appData->arguments[1] + 1)) == 0)
				_errorHandler(INVALID_ARGUMENT_FORMAT);
		}
		else
		{
			if (_isNumber(appData->arguments[1]) == 0)
				_errorHandler(INVALID_ARGUMENT_FORMAT);
		}
	}

	return (1);
}
