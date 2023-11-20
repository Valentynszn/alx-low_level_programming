#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: Pointer to the beginning of the listint_t
 * list to be freed
 *
 * Description: This function deallocates memory for each
 * node in the provided linked list, starting from the given
 * 'head' node, effectively freeing the entire list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
	head = temp;
	}
}
