#include "monty.h"

int opcode_check(char *opcode, unsigned int line_num)
{
	int i;
	char *list[] = {"push", "pall","pint", "pop", "swap", "add"};

	printf("opcode %d is %s\n", line_num, opcode);
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
