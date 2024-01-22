#include "monty.h"

int argument;

/**
 * read_file - reads the file passed into the program
 * @filepath: the file argv[0] passed as parameter
*/
void read_file(const char *filepath)
{
	FILE *file;
	char readline[260], *opcode, *arg;
	unsigned int count, index;
	int arg_status;
	stack_t *head;

	count = 0;
	head = NULL;
	file = fopen(filepath, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filepath);
		exit(EXIT_FAILURE);
	}
	while (fgets(readline, sizeof(readline), file) != NULL)
	{
		count++;
		opcode = strtok(readline, " \t\n");
		arg = strtok(NULL, " \t\n");
		if (opcode != NULL)
		{
			index = opcode_check(opcode, count);
			arg_status = arg_check(index, arg);
			argument = arg_recheck(opcode, count, arg_status, arg);
			opcode_exec(index, count, &head);
		}
	}
	free_stack(&head);
	fclose(file);
}
