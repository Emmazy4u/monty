#include "monty.h"

/**
 * readfile - reads the file passed into the program
 * @filepath: the file argv[0] passed as parameter
 * 
*/
void read_file(const char *filepath)
{
	FILE *file;
	char readline[260], *opcode, *argument;
	unsigned int count, index;

	count = 0;
	file = fopen(filepath, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s", filepath);
		exit(EXIT_FAILURE);
	}
	while (fgets(readline, sizeof(readline), file) != NULL)
	{
		count++;
		opcode = strtok(readline, " \t\n");
		argument = strtok(NULL, " \t\n");
		if (opcode != NULL)
		{
			index = opcode_check(opcode, count);
			if (argument == NULL || !(is_int(argument)))
			{
				fprintf(stderr, "L%d: usage: push integer", count);
				exit(EXIT_FAILURE);
			}
			opcode_exec(index, count);
		}
		
	}
}
