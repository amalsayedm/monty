#include "monty.h"
/**
 * mul - multiplies the top two elements
 * @head: head
 * @counter: line number
*/
void mul(stack_t **head, unsigned int counter)
{
	stack_t *head_temp;
	int size = 0, aux;

	head_temp = *head;
	while (head_temp)
	{
		head_temp = head_temp->next;
		size++;
	}
	if (size < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(carry.file);
		free(carry.matrial);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head_temp = *head;
	aux = head_temp->next->n * head_temp->n;
	head_temp->next->n = aux;
	*head = head_temp->next;
	free(head_temp);
}
/**
  *nop- free counter
  *@head: head
  *@counter: number
 */
void nop(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}
