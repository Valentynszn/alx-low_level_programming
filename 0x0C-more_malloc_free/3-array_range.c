#include "main.h"
#include <stdlib.h>

/**
 * array_range - Generates an array of integers,
 *		inclusively ordered from min to max.
 * @min: The starting value of the array.
 * @max: The ending value for the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly formed array.
 */

int *array_range(int min, int max)

{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
