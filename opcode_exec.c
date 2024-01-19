#include "monty.h"

//"push", "pall","pint", "pop", "swap", "add"

void opcode_exec(unsigned int status, unsigned int count)
{
	instruction_t instructions[] = {{"push", push},
								{"pall", pall},
								{"pint", pint},
								{"pop", pop},
								{"swap", swap},
								{"add", add}
								};

	instructions[status].f(&head, count);
}
