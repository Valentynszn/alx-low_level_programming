#include "lists.h"

/**
 * add_nodeint - Inserts a new node at the beginning of a linked list
 * @head: Pointer to the pointer of the first node in the list
 * @n: Data to be inserted into the new node
 *
 * Description: This function creates a new node with the given
 * data and inserts it at the beginning of the linked list
 * whose starting node's address is pointed to by 'head'.
 *
 * Return: Pointer to the newly added node, or NULL if memory allocation fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
