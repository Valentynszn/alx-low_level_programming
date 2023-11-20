#include "lists.h"

/**
 * free_listint_safe - Safely deallocates a linked list
 * and counts its elements.
 * @h: Pointer to the pointer of the first node in the
 * linked list
 *
 * Description: This function safely deallocates the
 * memory occupied by a linked list pointed to by 'h'.
 * It also counts the number of elements being freed.
 * It handles looped lists by verifying memory addresses
 * and frees the nodes while keeping track of the count
 * of elements freed. The function ensures safe memory
 * deallocation and returns the total count of elements
 * in the freed list.
 *
 * Return: The number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
	return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
