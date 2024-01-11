#include "lists.h"

/**
 * print_dlistint - Displays all elements in a dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The count of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	/*Variable to store the number of nodes in the list.*/
	size_t nodes = 0;

	while (h)
	{
		/*Increment the node count.*/
		nodes++;

		/*Print the value of the current node.*/
		printf("%d\n", h->n);

		/*Move to the next node.*/
		h = h->next;
	}

	/*Return the total number of nodes in the list.*/
	return (nodes);
}
