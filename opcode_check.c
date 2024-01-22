#include "monty.h"

/**
 * opcode_check - checks if the user typed opcode is valid
 * @opcode: the user typed opcode
 * @line_num: the line number being read in the monty file
 *
 * Return: returns the value that corresponds to the opcode
 * entered and exits the program when opcode is invalid
*/
int opcode_check(char *opcode, unsigned int line_num)
{
	int i;
	char *list[] = {"push", "pall", "pint", "pop", "swap", "add", "nop"};

	for (i = 0; list[i] != NULL; i++)
	{
		if (strcmp(opcode, list[i]) == 0)
		{
			return (i);
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_num, opcode);
	exit(EXIT_FAILURE);
}
