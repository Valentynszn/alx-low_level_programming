#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * in a linked list
 * @head: Pointer to the pointer of the first node in the list
 * @idx: Index where the new node is to be added
 * @n: Data to insert into the new node
 *
 * Description: This function inserts a new node with the given data 'n'
 * at the specified 'idx' position in the linked list, starting from the
 * 'head' node. If the insertion is successful, it returns a pointer to
 * the new node; otherwise, it returns NULL, indicating a failure
 * (e.g., due to memory allocation issues).
 *
 * Return: Pointer to the new node, or NULL if insertion fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
		{
	if (i == idx - 1)
	{
		new->next = temp->next;
		temp->next = new;
		return (new);
	}
	else
	temp = temp->next;
	}

	return (NULL);
}

