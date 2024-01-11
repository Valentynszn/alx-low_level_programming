#include "lists.h"

/**
 * get_dnodeint_at_index - Finds a node in a dlistint_t list.
 * @head: The starting point of the dlistint_t list.
 * @index: The index of the node to find.
 *
 * Return: If the node doesn't exist - NULL.
 *         Otherwise - the address of the found node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* Traverse the list until the desired index is reached. */
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
