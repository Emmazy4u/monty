#include "monty.h"

stack_t *new_stack(int argument)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	node->n = argument;
	node->prev = NULL;
	node->next = NULL;
	return (node)
}