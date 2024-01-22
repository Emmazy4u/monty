#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @stack: pointer to the stack pointer
 * @line_number: line number being read
*/
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	(*stack)->n += temp->n;
	(*stack)->prev = NULL;
	temp->next = NULL;
	free(temp);
}

/**
 * nop - doesn’t do anything
 * @stack: pointer to the stack pointer
 * @line_number: line number being read
*/
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
