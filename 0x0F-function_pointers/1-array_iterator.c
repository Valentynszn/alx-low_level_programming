
#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function for each element in an array.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @action: Pointer to a function to print elements in regular or hex format.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
