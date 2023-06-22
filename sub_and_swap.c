#include "monty.h"
/**
  *_sub- substraction
  *@head: head of stack
  *@counter: linenumber
 */
void _sub(stack_t **head, unsigned int counter)
{
	int sub, nodes;
stack_t *aux;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(carry.file);
		free(carry.matrial);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sub = aux->next->n - aux->n;
	aux->next->n = sub;
	*head = aux->next;
	free(aux);
}

/**
 * swap - swap the top two elements of the stack
 * @head: head
 * @counter: line number
 */
void swap(stack_t **head, unsigned int counter)
{
	int size = 0, aux;
	stack_t *top;

	top = *head;
	while (top)
	{
		top = top->next;
		size++;
	}
	if (size < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(carry.file);
		free(carry.matrial);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	top = *head;
	aux = top->n;
	top->n = top->next->n;
	top->next->n = aux;
}
