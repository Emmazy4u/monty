#include "monty.h"

/**
 * new_stack - for creating a new stack or node
 * 
 * Return: returns pointer to the created stack
*/
stack_t *new_stack(void)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));

	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	return (node);
}
