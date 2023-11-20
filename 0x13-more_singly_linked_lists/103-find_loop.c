#include "lists.h"

/**
 * find_listint_loop - Locates the start of a
 * loop in a linked list
 * @head: Pointer to the linked list to search
 * for a loop
 *
 * Description: This function determines if a
 * loop exists within the linked list pointed
 * to by 'head'. If a loop is present, it
 * identifies and returns the address of the
 * node where the loop starts. If there is no
 * loop in the list, it returns NULL.
 *
 * Return: Address of the node where the loop
 * starts, or NULL if no loop exists
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
	return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}

