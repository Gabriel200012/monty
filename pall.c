#include "monty.h"

/**
 * f_pall - prints the stack
 * @head: stack head
 *
 * Return: no return
 */

void printList(struck stack_s *head){
	struct stack_s *current = head;
	while(current !=NULL){
	printf("%d", current->data);

	current = current->next;
	}
printf("\n");
}
