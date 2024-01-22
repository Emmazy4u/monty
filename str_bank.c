#include "monty.h"

/**
 * is_int - scans if the typed opcode argument is an int value or not
 * @str: the typed argument received as a string literal
 *
 * Return: returns 1 if the typed argument is an int or 0 if it's not
*/
int is_int(const char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (0);
	}
	while (*str)
	{
		if (!(isdigit(*str)))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
