#include "main.h"

/**
 * _strcat - Connects the source string onto the destination string.
 *
 * @src: The string to be connected.
 * @dest: The destination string.
 *
 * Return: A pointer to the destination string.
 */


char *_strcat(char *dest, char *src)
{
int k, r;

k = 0;
r = 0;

while (dest[k] != '\0')
{
	k++;
}

while (src[r] != '\0')
{
	dest[k] = src[r];
	k++;
	r++;
}
dest[k] = '\0';
return (dest);
}
