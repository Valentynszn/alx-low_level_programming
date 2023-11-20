#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list at
 * a specified index
 * @head: Pointer to the pointer of the first element in the list
 * @index: Index of the node to delete
 *
 * Description: This function deletes the node at the given
 * 'index' in the linked list pointed to by 'head'. If the
 * deletion is successful, it returns 1; otherwise, it
 * returns -1, indicating a failure
 * (e.g., an empty list or an invalid index).
 *
 * Return: 1 on Success, or -1 on Failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
		return (-1);
		temp = temp->next;
		i++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}

