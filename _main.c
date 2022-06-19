#include "monty.h"

data_t *appData;

/**
 * main - main func
 *
 * @prmArgc: argc
 *
 * @prmArgv: argv
 *
 * Return: EXIT_SUCCESS(0) or EXIT_FAILURE(1)
**/

int main(int prmArgc, char **prmArgv)
{
	void (*func)(stack_t **, unsigned int);

	_initAppData(prmArgc, prmArgv);

	while (fgets(appData->buffer, BUFFER_SIZE, appData->fileDescriptor))
	{
		appData->lineNumber++;
		if (appData->buffer[0] == '\n')
			continue;
		if (_checkEmptyLine(appData->buffer) == 0)
			continue;
		appData->arguments = _strtow(
			appData->buffer,
			COMMAND_SEPARATOR,
			COMMENT_SEPARATOR
		);

		if (appData->arguments == NULL)
			_errorHandler(INVALID_PARSING_ARGUMENT);

		if (appData->arguments[0] == NULL)
		{
			_freeCharDoublePointer(appData->arguments);
			appData->arguments = NULL;
			continue;
		}

		func = _getCustomFunction(appData->arguments[0]);

		if (func != NULL)
			func(&appData->queue, appData->lineNumber);
		else
			_errorHandler(UNKNOWN_INSTRUCTION);
		_freeCharDoublePointer(appData->arguments);
		appData->arguments = NULL;
	}

	_freeAppData();

	exit(EXIT_SUCCESS);
}
