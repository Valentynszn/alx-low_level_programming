#include "lists.h"

/**
 * sum_dlistint - Calculates the total sum of data in a dlistint_t list.
 * @head: The starting point of the dlistint_t list.
 *
 * Return: The sum of all data elements.
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    while (head)
    {
        sum += head->n;
        head = head->next;
    }

    return (sum);
}
