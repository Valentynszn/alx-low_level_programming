#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets
 * the head pointer to NULL
 * @head: Pointer to the pointer of the listint_t
 * list to be freed
 *
 * Description: This function deallocates memory for
 * each node in the provided linked list, starting
 * from the node pointed to by 'head'. It also ensures
 * that the 'head' pointer is set to NULL to prevent
 * any dangling references.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
