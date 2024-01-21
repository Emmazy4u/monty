#include "monty.h"

/**
 * opcode_exec - executes the user typed opcode function
 * @status: holds the status of the user typed opcode
 * *for calling the function that corresponds to the opcode
 * @count: holds the current line number being read
 * @head: double pointer that holds the address of
 * the pointer to the stack
*/
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
