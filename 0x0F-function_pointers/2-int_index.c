#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, else -1
 * @array: The array to search.
 * @size: Number of elements in the array.
 * @cmp: Pointer to a function to compare integers.
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
