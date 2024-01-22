#include "monty.h"

/**
 * push - pushes the user typed argument into the stack
 * @stack: pointer to the stack pointer
 * @line_number: line number being read
 */
void push(stack_t **stack, unsigned int line_number)
{
	extern int argument;
	stack_t *new_node;

	new_node = new_stack();
	new_node->n = argument;
	new_node->prev = NULL;
	if (*stack == NULL && line_number == 1)
	{
		*stack = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
		*stack = new_node;
	}
}

/**
 * pall - prints all the argument available in the stack
 * @stack: pointer to the stack pointer
 * @line_number: line number being read
 */
void pall(stack_t **stack, unsigned int line_number)
{
	if (*stack != NULL && line_number > 1)
	{
		stack_t *step;

		step = *stack;
		while (step != NULL)
		{
			printf("%d\n", step->n);
			step = step->next;
		}
	}
	else
	{
		;
	}
}

/**
 * pint - prints the value at the top of the stack
 * @stack: pointer to the stack pointer
 * @line_number: line number being read
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

/**
 * pop - removes the top element of the stack
 * @stack: pointer to the stack pointer
 * @line_number: line number being read
*/
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack  = (*stack)->next;
	free(temp);
}

/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to the stack pointer
 * @line_number: line number being read
*/
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		 exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	(*stack)->next = temp->next;
	if ((*stack)->next != NULL)
		(*stack)->next->prev = *stack;
	temp->next = *stack;
	temp->prev = NULL;
	(*stack)->prev = temp;
	*stack = temp;
}
