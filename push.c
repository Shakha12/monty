#include "monty.h"
/**
 * p_push - adds node to the stack
 * @head: stack head
 * @counter: line number
 * Return: on success no return
*/
void p_push(stack_t **head, unsigned int counter)
{
	int y, z = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			z++;
		for (; bus.arg[z] != '\0'; z++)
		{
			if (bus.arg[z] > 57 || bus.arg[z] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			f_free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		f_free_stack(*head);
		exit(EXIT_FAILURE); }
	y = atoi(bus.arg);
	if (bus.lifi == 0)
		a_addnode(head, y);
	else
		a_addqueue(head, y);
}
