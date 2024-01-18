#include "monty.h"

/**
 * readfile - reads the file passed into the program
 * @filepath: the file argv[0] passed as parameter
 * 
*/
void read_exec(const char *filepath)
{
	FILE *file;
	char readline[260];
	int count, status;

	count = 0;
	file = fopen(filepath, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s", filepath);
		exit(EXIT_FAILURE);
	}
	while (fgets(readline, sizeof(readline), filepath) != NULL)
	{
		count++;
		char *opcode = strtok(line, " \t\n");
		char *argument = strtok(NULL, " \t\n");
		if (opcode != NULL)
		{
			status = opcode_check(opcode, count);
			if (argument == NULL || !(is_int(argument)))
			{
				fprintf(stderr, "L%d: usage: push integer", count);
				exit(EXIT_FAILURE);
			}
			opcode_exec(status, count);
		}
		
	}
}
