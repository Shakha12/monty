#include "monty.h"
/**
 * fn_queue - print the top element
 * @head: stack head
 * @counter: line number
 * Return: on success no return
*/
void fn_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - adds node to the tail stack
 * @n: new parameter value
 * @head: head of the stack
 * Return: on success no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *nw_node, *ax;

	ax = *head;
	nw_node = malloc(sizeof(stack_t));
	if (nw_node == NULL)
	{
		printf("Error\n");
	}
	nw_node->n = n;
	nw_node->next = NULL;
	if (ax)
	{
		while (ax->next)
			ax = ax->next;
	}
	if (!ax)
	{
		*head = nw_node;
		nw_node->prev = NULL;
	}
	else
	{
		ax->next = nw_node;
		nw_node->prev = ax;
	}
}
