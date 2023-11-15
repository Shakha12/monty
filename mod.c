#include "monty.h"
/**
 * fn_mod - computes the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line number
 * Return: upon success no return
*/
void fn_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int length = 0, ax;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ax = h->next->n % h->n;
	h->next->n = ax;
	*head = h->next;
	free(h);
}
