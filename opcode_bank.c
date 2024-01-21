#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	extern int argument;
	stack_t **top_push, *new_node;

	printf("push entered\n");
	if (line_number == 1)
	{
		top_push = stack;
		(*top_push)->n = argument;
		printf("if statement & new stack value: %d\n", (*top_push)->n);
		(*top_push)->prev = NULL;
		(*top_push)->next = NULL;
		
	}
	else
	{
		printf("else statement entered\n");
		top_push = stack;
		while((*top_push)->next != NULL)
			*top_push = (*top_push)->next;
		new_node = new_stack();
		new_node->n = argument;
		printf("new_node n changed to: %d\n", new_node->n);
		new_node->prev = *top_push;
		new_node->next = NULL;
		(*top_push)->next = new_node;
		*top_push = NULL;
	}
}

void pall(stack_t **stack, unsigned int line_number)
{
	/*stack_t *top;*/
	(void)stack;
	(void)line_number;
}
	/*
	printf("pall entered\n");
	*/
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
}
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
