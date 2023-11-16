#include "monty.h"
/**
* e_execute - execute the opcode
* @stack: head linked list stack
* @counter: line number counter
* @file: pointer to monty file
* @content: line content
* Return: no return
*/
int e_execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", p_push}, {"pall", p_pall}, {"pint", p_pint},
				{"pop", p_pop},
				{"swap", s_swap},
				{"add", a_add},
				{"nop", n_nop},
				{"sub", s_sub},
				{"div", d_div},
				{"mul", m_mul},
				{"mod", m_mod},
				{"pchar", p_pchar},
				{"pstr", p_pstr},
				{"rotl", r_rotl},
				{"rotr", r_rotr},
				{"queue", q_queue},
				{"stack", s_stack},
				{NULL, NULL}
				};
	unsigned int y = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[y].opcode && op)
	{
		if (strcmp(op, opst[y].opcode) == 0)
		{	opst[y].f(stack, counter);
			return (0);
		}
		y++;
	}
	if (op && opst[y].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		f_free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
