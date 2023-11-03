#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates memory for a block of a different size.
 * @ptr: Pointer to the memory block previously allocated.
 * @old_size: Size, in bytes, of the original allocated space of ptr.
 * @new_size: New size, in bytes, for the reallocated memory block.
 *
 * Return: ptr or NULL under different conditions.
 * if new_size == old_size, returns ptr without changes.
 * if malloc fails, returns NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
