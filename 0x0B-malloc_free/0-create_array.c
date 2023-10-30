#include "main.h"
#include <stdlib.h>

/**
 * create_array - Generates an array of characters and
 *		sets each element to a specific character.
 * @size: The size of the array to be initialized.
 * @c: The specific character used to initialize the array.
 *
 * Return: If size is 0 or if the function fails - NULL.
 *	Otherwise - a pointer to the created array.
 */

char *create_array(unsigned int size, char c)

{
	char *array;
	unsigned int index;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
