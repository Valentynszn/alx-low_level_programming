#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to the pointer of the first node in the list
 *
 * Description: This function reverses the linked list pointed
 * to by 'head'. It iterates through the list, reversing the
 * pointers of each node to change the direction of the list.
 * Finally, it returns a pointer to the new first node
 * in the reversed list.
 *
 * Return: Pointer to the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

