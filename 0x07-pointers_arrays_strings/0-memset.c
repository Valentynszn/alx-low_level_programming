#include "main.h"

/**
 * _memset - Fills memory with a given value.
 *
 * @s: Memory to be filled.
 * @b: Value used for filling.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the filled memory.
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int a;

	for (a = 0; a < n; a++)
	s[a] = b;
	return (s);
}
