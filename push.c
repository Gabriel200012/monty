#include "monty.h"

/**
 * f_push - add node to the stack
 * @stack - stack head
 * 
 * return - no return
 */

void push_stack(stack_t **stack, int n){
	stack_t *new_node = malloc(sizeof(stack_t));
	if (new_node == NULL){
		fprintf(stderr, "Memory allocation error\n")
			exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->prev =NULL;
	new_node->next = *stack;

	if(*stack !=NULL){
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}
