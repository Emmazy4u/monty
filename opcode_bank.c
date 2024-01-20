#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	extern char argument;
	stack_t *top, *temp;
	(void)line_number;

	printf("push entered\n");
	if (*stack == NULL)
	{
		*stack = new_stack();
		*stack->n = argument;
		*stack->prev = NULL;
		*stack->next = NULL;
	}
	else
	{
		top = temp = *stack;
		while(top->next != NULL)
			top = top->next;
		temp = new_stack();
		temp->n = argument;
		temp->prev = top;
		top->next = temp;
		top = temp;
		temp = NULL;
	}
}

void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *top, *temp;

	printf("pall entered\n");
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
	else
		;
}

void pint(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("pint entered\n");
}

void pop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("pop entered\n");
}

void swap(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("swap entered\n");
}
void add(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("add entered\n");
}
