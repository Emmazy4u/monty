#include "monty.h"

/**
 * free_stack - frees the stack from memory
 * @stack: address of stack pointer
 */
void free_stack(stack_t **stack)
{
	stack_t *temp = *stack;

	while (*stack != NULL)
	{
		*stack =  (*stack)->next;
		free(temp);
		temp = *stack;
	}
}
