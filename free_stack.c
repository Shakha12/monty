#include "monty.h"
/**
* f_free_stack - frees a doubly linked list
* @head: head of the stack
*/
void f_free_stack(stack_t *head)
{
	stack_t *ax;

	ax = head;
	while (head)
	{
		ax = head->next;
		free(head);
		head = ax;
	}
}
