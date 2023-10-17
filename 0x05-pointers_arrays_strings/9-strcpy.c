#include "main.h"

/**
 * _strcpy - Copies the content of the source str into the destination str.
 * @dest: Pointer to the destination string where the content is copied to.
 * @src: Pointer to the source string that is being copied.
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
