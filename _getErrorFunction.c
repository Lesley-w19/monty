#include "monty.h"

/**
 * _getErrorFunction - a function that checks the custom command.
 * @prmErrorCode: is the command.
 *
 * Return: returns a pointer function.
 */

void (*_getErrorFunction(int prmErrorCode))()
{
	int i = 0;

	error_t fp[] = {
		{ANY_FILE, _errorAnyFile},
		{ACCESS_DENIED, _errorAccessDenied},
		{UNKNOWN_INSTRUCTION, _errorUnknownInstruction},
		{INVALID_ARGUMENT_FORMAT, _errorInvalidArgumentFormat},
		{PINT_EMPTY_STACK, _errorPintEmptyStack},
		{POP_EMPTY_STACK, _errorPopEmptyStack},
		{SWAP_EMPTY_STACK, _errorSwapEmptyStack},
		{ADD_EMPTY_STACK, _errorAddEmptyStack},
		{DIV_EMPTY_STACK, _errorDivEmptyStack},
		{PCHAR_EMPTY_STACK, _errorPcharEmptyStack},
		{SWAP_STACK_TOO_SHORT, _errorSwapStackTooShort},
		{ADD_STACK_TOO_SHORT, _errorAddStackTooShort},
		{DIV_STACK_TOO_SHORT, _errorDivStackTooShort},
		{SUB_STACK_TOO_SHORT, _errorSubStackTooShort},
		{MUL_STACK_TOO_SHORT, _errorMulStackTooShort},
		{MOD_STACK_TOO_SHORT, _errorModStackTooShort},
		{PCHAR_STACK_TOO_SHORT, _errorPcharStackTooShort},
		{PCHAR_OUT_OF_RANGE, _errorPcharOutOfRange},
		{MALLOC_FAILED, _errorMallocFailed},
		{NULLABLE_NUMBER, _errorNullableNumber},
		{INVALID_EXTENSION_FILE, _errorInvalidExtensionFile},
	};

	while (i < 21)
	{
		if (prmErrorCode == (fp + i)->code)
			return ((fp + i)->func);
		i++;
	}

	return (NULL);
}
