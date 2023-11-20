#include "lists.h"

/**
 * sum_listint - Computes the sum of all the data in
 * a listint_t list
 * @head: Pointer to the first node in the linked list
 *
 * Return: The resulting sum of all data values
 *
 * Description: This function iterates through the linked
 * list starting from the 'head' node, adding up the 'n'
 * values of each node to calculate the sum. It returns
 * the total sum of all the data values stored in the
 * linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
