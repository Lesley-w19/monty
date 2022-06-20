#include "monty.h"

/**
 * _initAppData - is a function to initialize variable.
 * @prmArgc: is the argument number
 * @prmArgv: is the argument's list.
 *
 * Return: returns void.
 */

void _initAppData(int prmArgc, char **prmArgv)
{
	appData = malloc(sizeof(data_t));

	if (appData == NULL)
		_errorHandler(MALLOC_FAILED);

	if (prmArgc != 2)
		_errorHandler(ANY_FILE);

	appData->arguments = NULL;
	appData->buffer = NULL;
	appData->queue = NULL;
	appData->fileDescriptor = NULL;
	appData->lineNumber = 0;
	appData->fileName = prmArgv[1];
	appData->way = LIFO;

	appData->fileDescriptor = fopen(appData->fileName, "r");

	if (appData->fileDescriptor == NULL)
		_errorHandler(ACCESS_DENIED);
	appData->buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);

	if (appData->buffer == NULL)
		_errorHandler(MALLOC_FAILED);
}
