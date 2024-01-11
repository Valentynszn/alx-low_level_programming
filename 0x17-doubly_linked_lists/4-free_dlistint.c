#include "lists.h"

/*
 * free_dlistint - Frees the memory allocated for a
 * doubly linked list.
 * @head: A pointer to the head of the dlistint_t list.
 *
 * Description: list starting from the specified head node and deallocates
 * the memory for each node. It ensures that all nodes in
 * the list are freed, releasing the resources they occupy.
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
