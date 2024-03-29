#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This allocates memory using malloc.
 * @b: Number of bytes to be allocated.
 *
 * Return: Pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)

{
	void *mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}
