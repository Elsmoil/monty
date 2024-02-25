#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pull", f_pull}, {"pinte", f_pinte},
				{"ptop", f_ptop},
				{"swap", f_swap},
				{"add", f_add},
				{"nope", f_nope},
				{"sub", f_sub},
				{"dive", f_dive},
				{"muli", f_muli},
				{"mode", f_mode},
				{"prchar", f_prchar},
				{"pstri", f_pstri},
				{"rotate", f_rotate},
				{"rotat_b", f_rotat_b},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ f_printf(stderr, "L%d: unknown instruction %s\n", counter, op);
		f_close(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
