#include "monty.h"

/**
 * push - pushes the user typed argument into the stack
 * @stack: pointer to the stack pointer
 * @line_number: line number being read
 * 
*/
void push(stack_t **stack, unsigned int line_number)
{
	printf("entered push\n");
	(void)stack;
	(void)line_number;
	/*
	extern int argument;
	stack_t *new_node;

	new_node = new_stack();
	new_node->n = argument;
    new_node->prev = NULL;
	if (*stack == NULL && line_number == 1)
	{
		printf("entered if in push");
		*stack = new_node;
        new_node->next = NULL;
	}
	else
	{
		printf("entered else in push");
		new_node->next = *stack;
        (*stack)->prev = new_node;
        *stack = new_node;
	}
	*/
}

/**
 * pall - prints all the argument available in the stack
 * @stack: pointer to the stack pointer
 * @line_number: line number being read
 * 
*/
void pall(stack_t **stack, unsigned int line_number)
{
	printf("entered pall");
	(void)stack;
	(void)line_number;
	printf("pall ended");
}
/*	if (*stack != NULL && line_number > 1)
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
*/
/**
 * pint - prints the value at the top of the stack
 * @stack: pointer to the stack pointer
 * @line_number: line number being read
 * 
*/
void pint(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
	/*stack_t *top_pint = *stack;
	printf("pint entered\n");
	Check if the stack is empty
	 */
	/*
    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }
	*/
    /* Print the value at the top of the stack*/
	/*
	while (top_pint->next != NULL)
		top_pint = top_pint->next;
	printf("%d\n", top_pint->n);
}
*/

/**
 * pop - removes the top element of the stack
 * @stack: pointer to the stack pointer
 * @line_number: line number being read
 * 
*/
void pop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
	/*
	   stack_t *temp_pop, *top_pop;

	printf("pop entered\n");
    Check if the stack is empty
	 */
	/*
    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }
	*/
    /* Remove the top element and free the memory*/
	/*
    temp_pop = *stack;
	while (temp_pop->next != NULL)
	{
		temp_pop = temp_pop->next;
	}
	top_pop = temp_pop->prev;
	top_pop->next = NULL;
    free(temp_pop);
}
*/

/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to the stack pointer
 * @line_number: line number being read
 * 
*/
void swap(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
	/*printf("swap entered\n");
	int temp;
    // Check if the stack has at least two elements
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    // Swap the values of the top two elements
    temp = (*stack)->n;
    (*stack)->n = (*stack)->next->n;
    (*stack)->next->n = temp;
}
*/

/**
 * add - adds the top two elements of the stack.
 * @stack: pointer to the stack pointer
 * @line_number: line number being read
 * 
*/
void add(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
/*
   printf("add entered\n");
	*/
/*
	int sum;
    // Check if the stack has at least two elements
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    // Calculate the sum of the top two elements
    sum = (*stack)->n + (*stack)->next->n;

    // Pop the top element and update the value of the new top element
    pop(stack, line_number);
    (*stack)->n = sum;
}
*/

/**
 * nop - doesn’t do anything
 * @stack: pointer to the stack pointer
 * @line_number: line number being read
 * 
*/
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
