#include "lists.h"

/**
 * listint_len - Counts and returns the number of elements in a linked list
 * @h: Pointer to a linked list of type listint_t to be traversed
 *
 * Description: This function iterates through the given linked list and
 * counts the number of nodes, providing the total number of elements.
 *
 * Return: The count of nodes, indicating the number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
