#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Places a new node at the start of a linked list
 * @head: A pointer to the start of the list_t list
 * @str: The new string to be inserted into the node
 *
 * Return: The address of the new element, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
