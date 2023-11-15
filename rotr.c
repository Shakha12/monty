#include "monty.h"
/**
  *fn_rotr- rotate the stack to the bottom
  *@head: pointer to stack head
  *@counter: line number
  *Return: on success no return
 */
void fn_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *cpy;

	cpy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = *head;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*head)->prev = cpy;
	(*head) = cpy;
}
