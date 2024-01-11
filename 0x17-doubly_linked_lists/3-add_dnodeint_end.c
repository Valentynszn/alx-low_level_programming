#include "lists.h"

/**
 * add_dnodeint_end - Appends a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: If the operation fails - NULL.
 *         Otherwise - the address of the newly added node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		/* Set the previous pointer of the new node to NULL. */
		new->prev = NULL;
		/* Update the head pointer to point to the new node. */
		*head = new;
		/* Return the address of the new node. */
		return (new);
	}

	/* Initialize a pointer to traverse the list. */
	last = *head;

	/* Find the last node in the list. */
	while (last->next != NULL)
		last = last->next;

	/* Set the next pointer of the last node to the new node. */
	last->next = new;
	/* Set the previous pointer of the new node to the last node. */
	new->prev = last;

	/* Return the address of the new node. */
	return (new);
}
