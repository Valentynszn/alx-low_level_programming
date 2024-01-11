#include "lists.h"

/*
 * delete_dnodeint_at_index - Removes a node at the
 * specified index from a dlistint_t.
 * @head: Pointer to the head of the dlistint_t.
 * @index: Index of the node to be removed.
 * Description: This function removes the node at the specified
 * index 'index' from the given doubly linked list.
 * Return: Returns 1 upon success, and -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	/* If the list is empty, return -1 indicating failure. */
	if (*head == NULL)
		return (-1);

	/* Traverse the list to reach the desired index. */
	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	/* If the node to delete is the head node. */
	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	/* If the node to delete is not the head node. */
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}

	/* Free the memory of the deleted node. */
	free(tmp);
	return (1);
}
