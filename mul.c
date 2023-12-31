#include "monty.h"
/**
 * m_mul - multiplies top two elements of the stack.
 * @head: stack head
 * @counter: line number
 * Return: on success no return
*/
void m_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		f_free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	ax = h->next->n * h->n;
	h->next->n = ax;
	*head = h->next;
	free(h);
}
