#include "main.h"

/**
 * _strncat - Concatenates two strings, using
 * a maximum of 'n' bytes from 'src'.
 *
 * @dest: The destination string to which 'src' will be concatenated.
 * @src: The source string to be appended to 'dest'.
 * @n: The maximum number of bytes to append from 'src'.
 *
 * Return: A pointer to the modified 'dest' string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
