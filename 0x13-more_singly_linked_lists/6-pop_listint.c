#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to the pointer of the first element
 * in the linked list
 *
 * Return: The data inside the deleted element, or 0 if
 * the list is empty
 *
 * Description: This function removes the first node of
 * the linked list whose address is pointed to by 'head'.
 * It retrieves and returns the data stored in the deleted
 * node. If the list is empty or 'head' points to NULL,
 * it returns 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
	return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
