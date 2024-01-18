#include "monty.h"

//"push", "pall","pint", "pop", "swap", "add"

void opcode_exec(unsigned int status, int argument, unsigned int count)
{
	extern stack_t *head;
	switch(status)
	{
		case 1:
			push();
			break;
		case 2:
			pint();
			break;
		case 3:
			pop();
			break;
		case 4:
			swap();
			break;
		case 5:
			add();
			break;
		default:
			;
	}
}