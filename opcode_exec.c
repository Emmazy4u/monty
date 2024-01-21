#include "monty.h"

void opcode_exec(unsigned int status, unsigned int count, stack_t **head)
{
	instruction_t instructions[] = {{"push", push},
								{"pall", pall},
								{"pint", pint},
								{"pop", pop},
								{"swap", swap},
								{"add", add}
								};

	instructions[status].f(head, count);
}
