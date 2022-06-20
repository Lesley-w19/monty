#ifndef MONTY_H_
#define MONTY_H_

#define _POSIX_C_SOURCE 200809L
#define INVALID_ARGUMENT_NUMBER 10
#define INVALID_FILE 11
#define INVALID_PARSING_ARGUMENT 12
#define INVALID_ARGUMENT_FORMAT 13
#define PINT_EMPTY_STACK 14
#define POP_EMPTY_STACK 15
#define SWAP_EMPTY_STACK 16
#define ADD_EMPTY_STACK 17
#define SWAP_STACK_TOO_SHORT 18
#define ADD_STACK_TOO_SHORT 19
#define MALLOC_FAILED 20
#define SUB_STACK_TOO_SHORT 21
#define DIV_STACK_TOO_SHORT 22
#define DIV_EMPTY_STACK 23
#define NULLABLE_NUMBER 24
#define MUL_STACK_TOO_SHORT 25
#define PCHAR_EMPTY_STACK 26
#define PCHAR_STACK_TOO_SHORT 27
#define PCHAR_OUT_OF_RANGE 28
#define MOD_STACK_TOO_SHORT 29
#define ANY_FILE 30
#define ACCESS_DENIED 31
#define UNKNOWN_INSTRUCTION 32
#define INVALID_EXTENSION_FILE 33

#define BUFFER_SIZE 1024
#define COMMAND_SEPARATOR " \n"
#define OPCODE_EXTENSION "m"
#define LIFO 0
#define FIFO 1
#define COMMENT_SEPARATOR "#"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct data_s - variables
 * @arguments: array of strings
 * @buffer: buffer
 * @fileDescriptor: monty file
 * @fileName: file name
 * @queue: queue
 * @lineNumber: line number of monty file
 * @way: orientation
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct data_s
{
	char **arguments;
	char *buffer;
	FILE *fileDescriptor;
	char *fileName;
	stack_t *queue;
	int lineNumber;
	int way;
} data_t;

/**
 * struct error_s - error structure
 *
 * @code: error code
 * @func: function to handle the opcode
 */
typedef struct error_s
{
	int code;
	void (*func)();
} error_t;

extern data_t *appData;

void _add(stack_t **stack, unsigned int line_number);
void _addWord(char *prmWord, int *prmIndex, char **prmArray);
int _atoi(char *prmString);
void *_calloc(unsigned int prmNumber, unsigned int prmSize);
int _checkArguments(void);
int _checkEmptyLine(char *prmLine);
int _checkEscapeSeparators(char prmChar, char *prmEscapeSeparators);
int _checkSeparators(char prmChar, char *prmSeparators);
char *_cleanString(char *prmString);
stack_t *_createStack(int prmNumber);
void _div(stack_t **stack, unsigned int line_number);
void _errorHandler(int prmErrorCode);
void _errorAnyFile(void);
void _errorAccessDenied(void);
void _errorUnknownInstruction(void);
void _errorInvalidArgumentFormat(void);
void _errorPintEmptyStack(void);
void _errorPopEmptyStack(void);
void _errorSwapEmptyStack(void);
void _errorAddEmptyStack(void);
void _errorDivEmptyStack(void);
void _errorDivStackTooShort(void);
void _errorModStackTooShort(void);
void _errorPcharEmptyStack(void);
void _errorSwapStackTooShort(void);
void _errorAddStackTooShort(void);
void _errorSubStackTooShort(void);
void _errorMulStackTooShort(void);
void _errorPcharStackTooShort(void);
void _errorPcharOutOfRange(void);
void _errorMallocFailed(void);
void _errorNullableNumber(void);
void _errorInvalidExtensionFile(void);
void _freeAppData(void);
void _freeCharDoublePointer(char **prmPtr);
void _freeStackList(stack_t *prmHeadNode);
void (*_getCustomFunction(char *prmCommand))(stack_t **, unsigned int);
void (*_getErrorFunction(int prmErrorCode))();
char *_getword(char *prmGlobal, int prmOffset, int prmSize);
int _inArray(char prmChar, char *prmArray);
int _isdigit(char prmChar);
void _initAppData(int prmArgc, char **prmArgv);
int _isNumber(char *s);
char *_memcpy(char *prmDest, char *prmSrc, unsigned int prmLimit);
char *_memset(char *prmString, char prmCharacter, unsigned int prmLimit);
void _mul(stack_t **stack, unsigned int line_number);
void _mod(stack_t **stack, unsigned int line_number);
void _nop(
	stack_t **stack __attribute__((unused)),
	unsigned int line_number __attribute__((unused))
);
void _push(stack_t **stack, unsigned int line_number);
void _pushToEnd(stack_t **stack);
void _pushToStart(stack_t **stack);
void _pall(stack_t **stack, unsigned int line_number);
void _palFromEnd(stack_t **stack);
void _palFromStart(stack_t **stack);
void _pchar(stack_t **stack, unsigned int line_number);
void _pstr(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _queue(
	stack_t **stack,
	unsigned int line_number
);
void *_realloc(void *prmPtr, unsigned int prmOldSize, unsigned int prmNewSize);
void _rotl(stack_t **stack, unsigned int line_number);
void _rotr(stack_t **stack, unsigned int line_number);
void _stack(
	stack_t **stack,
	unsigned int line_number
);
int _stackLen(stack_t *stack);
char **_strtow(char *prmString, char *prmSeparators,
	       char *prmEscapeSeparators);
void _sub(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
int _wordNumber(char *prmString, char *prmSeparators);

#endif
