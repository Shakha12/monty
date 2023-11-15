#include "monty.h"
/**
 * fn_pall - prints the stack
 * @head: stack head
 * @counter: number used
 * Return: on success return
*/
void fn_pall(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	(void)counter;

	hd = *head;
	if (hd == NULL)
		return;
	while (hd)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}
