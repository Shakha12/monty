#include "monty.h"
/**
 * a_addnode - adds node to the head stack
 * @head: poiner to head of the stack
 * @n: parameter of new_value
 * Return:on success no return
*/
void a_addnode(stack_t **head, int n)
{

	stack_t *nw_node, *ax;

	ax = *head;
	nw_node = malloc(sizeof(stack_t));
	if (nw_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (ax)
		ax->prev = nw_node;
	nw_node->n = n;
	nw_node->next = *head;
	nw_node->prev = NULL;
	*head = nw_node;
}
