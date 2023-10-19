#include "main.h"

/**
 * _strncpy - Copies a string up to 'n' characters
 * from source to destination.
 * @dest: The destination where the string will be copied to.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to copy from 'src'.
 *
 * Return: A pointer to the modified 'dest' string.
 */

char *_strncpy(char *dest, char *src, int n)

{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
