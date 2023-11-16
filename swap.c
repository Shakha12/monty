#include "monty.h"
/**
 * s_swap - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void s_swap(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int length = 0, ax;

	hd = *head;
	while (hd)
	{
		hd = hd->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		f_free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	ax = hd->n;
	hd->n = hd->next->n;
	hd->next->n = ax;
}
