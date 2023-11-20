#include "lists.h"

/**
 * print_listint - Displays all elements within a linked list
 * @h: Pointer to a linked list of type listint_t to be displayed
 *
 * Description: This function traverses through the provided linked list and
 * prints each element's value.
 *
 * Return: The total number of nodes present in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
