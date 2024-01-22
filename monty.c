#include "monty.h"

/**
 * main - Entry point of the monty program
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: returns 0 on success
*/
int main(int argc, char **argv)
{
	if (!(argc == 2))
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	read_file(argv[1]);
	return (0);
}
