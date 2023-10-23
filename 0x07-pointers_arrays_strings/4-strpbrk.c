#include "main.h"

/**
 * _strpbrk - Finds the first matching character between 's' and 'accept'.
 *
 * @s: The string to search in.
 * @accept: The characters to search for.
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)

{
	int k, j;

	for (k = 0; s[k] != '\0'; k++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[k] == accept[j])
	return (s + k);
	}
	}
	return (0);
}
