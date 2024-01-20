#include "monty.h"

stack_t *new_stack(void)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));

	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	node->prev = NULL;
	node->next = NULL;
	node->n = 0;
	return (node);
}
