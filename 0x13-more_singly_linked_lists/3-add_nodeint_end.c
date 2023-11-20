#include "lists.h"

/**
 * add_nodeint_end - Inserts a node at the end of a linked list
 * @head: Pointer to the pointer of the first element in the list
 * @n: Data to be inserted into the new element
 *
 * Description: This function creates a new node with the
 * given data and appends it at the end of the linked list
 * whose starting node's address is pointed to by 'head'.
 *
 * Return: Pointer to the newly added node,
 *	or NULL if memory allocation fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new;

	return (new);
}
