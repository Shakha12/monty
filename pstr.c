#include "monty.h"
/**
 * p_pstr - print string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line number
 * Return: on success no return
*/
void p_pstr(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	(void)counter;

	hd = *head;
	while (hd)
	{
		if (hd->n > 127 || hd->n <= 0)
		{
			break;
		}
		printf("%c", hd->n);
		hd = hd->next;
	}
	printf("\n");
}
