#include "monty.h"
/**
  *f_sub- sustration function
  *@head: stack head
  *@counter: line number
  *Return: on success no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *ax;
	int ss, nodes;

	ax = *head;
	for (nodes = 0; ax != NULL; nodes++)
		ax = ax->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ax = *head;
	ss = ax->next->n - ax->n;
	ax->next->n = ss;
	*head = ax->next;
	free(ax);
}
