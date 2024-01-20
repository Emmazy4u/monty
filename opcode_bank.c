#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	extern int argument;
	stack_t *top, *temp;

	(void)line_number;
	printf("push entered\n");
	if ((*stack)->n == 0 && line_number == 1)
	{
		(*stack)->n = argument;
		printf("the new stack contains %d\n", (*stack)->n);
		(*stack)->prev = NULL;
		(*stack)->next = NULL;
	}
	else
	{
		printf("else condition entered\n");
		top = temp = *stack;
		while(top->next != NULL)
			top = top->next;
		temp = new_stack();
		temp->n = argument;
		printf("value of n is: %d\n", temp->n);
		temp->prev = top;
		top->next = temp;
		top = temp;
		temp = NULL;
		top = NULL;
	}
	while (*stack != NULL)
	{
		printf("n1 is: %d\n", (*stack)->n);
		*stack = (*stack)->next;
	}
	printf("n2 is: %d\n", (*stack)->n);
}

void pall(stack_t **stack, unsigned int line_number)
{
	/*stack_t *top;*/
	(void)stack;
	(void)line_number;
	printf("pall entered\n");
	/*
	if (*stack != NULL)
	{
		top = *stack;
		while(top->next != NULL)
			top = top->next;
		while(top->prev != NULL)
		{
			printf("%d\n", top->n);
			top = top->prev;
		}
		printf("%d\n", top->n);
	}
	*/
}

void pint(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	/*stack_t *top_pint = *stack; */
	printf("pint entered\n");
	/* Check if the stack is empty*/
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
	*/
}

void pop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	/*stack_t *temp_pop, *top_pop;*/

	printf("pop entered\n");
    /* Check if the stack is empty*/
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
	*/
}

void swap(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("swap entered\n");

	/*
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
	*/
}
void add(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("add entered\n");
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
	*/
}
