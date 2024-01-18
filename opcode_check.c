#include "monty.h"

int opcode_check(char *opcode, unsigned int line_num)
{
	int i;
	char list[] = {"push", "pall","pint", "pop", "swap", "add"};
	for (i = 0; list[i] != NULL; i++)
	{
		if (strcmp(opcode, list) == 0)
		{
			return (i + 1);
		}
		else
		{
			fprintf(stderr, "L%d: unknown instruction %s", line_num, opcode);
			exit(EXIT_FAILURE);
		}
	}
}