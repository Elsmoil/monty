#include "monty.h"
/**
 * f_pinte - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pinte(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		f_printf(stderr, "L%u: can't pint, stack empty\n", counter);
		f_close(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
