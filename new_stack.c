#include "monty.h"

stack_t *new_stack(void)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	node->prev = NULL;
	node->next = NULL;
	return (node)
}