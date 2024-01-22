#include "monty.h"

/**
 * arg_check - checks if the argument passed is valid
 * @index: index representing the user typed opcode
 * @arg: the typed argument in as a string
 *
 * Return: returns 1 when index is (1) for push, arg is empty or
 * arg is not an integer value. returns (0) when arg is valid for push.
 * on the other end, it returns (0) when arg is empty for other opcode,
 * and (-1) when an arg is passed.
 */
int arg_check(int index, char *arg)
{
	if (index == 0)
	{
		if (arg == NULL || !(is_int(arg)) || *arg == '\0')
			return (1);
		else
			return (0);
	}
	else
	{
		if (arg == NULL || *arg == '\0')
			return (0);
		else
			return (-1);
	}
	printf("argument check failed for some reasons\n");
	return (0);
}

/**
 *  arg_recheck - further checks the arguments to format argument as int
 * @opcode: the opcode entered
 * @count: tracks the line number
 * @arg_status: the status of the argument
 * @arg: the argument passed in its string form
 *
 * Return: returns the argument as an integer
*/
int arg_recheck(char *opcode, int count, int arg_status, char *arg)
{
	if (arg_status > 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		exit(EXIT_FAILURE);
	}
	else if (arg_status < 0)
	{
		fprintf(stderr, "L%d: %s: requires no arg.\n", count, opcode);
		exit(EXIT_FAILURE);
	}
	else
	{
		if (arg != NULL && *arg != '\0')
			return (atoi(arg));
	}
	return (0);
}
