#include "lists.h"

/*
 * free_dlistint - Deallocates a linked dlistint_t list.
 * @head: The starting point of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	/* Declare a temporary node pointer. */
	dlistint_t *tmp;

	while (head)
	{
		/* Store the next node in the temporary pointer. */
		tmp = head->next;
		/* Free the current node. */
		free(head);
		/* Move to the next node. */
		head = tmp;
	}
}
