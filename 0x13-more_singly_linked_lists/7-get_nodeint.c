#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the node at a specified index
 * in a linked list
 * @head: Pointer to the first node in the linked list
 * @index: Index of the node to retrieve
 *
 * Return: Pointer to the node at the specified index, or NULL
 * if not found
 *
 * Description: This function traverses the linked list starting
 * from the 'head' node and returns a pointer to the node at the
 * specified 'index' if it exists. If 'index' is beyond the list's
 * bounds or the list is empty, it returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
