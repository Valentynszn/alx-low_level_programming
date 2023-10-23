#include "main.h"

/**
 * _memcpy - Copies memory from source to destination.
 *
 * @src: Source memory to copy from.
 * @dest: Destination memory to copy to.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to the copied destination memory.
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
	dest[k] = src[k];
	}
	return (dest);
}
