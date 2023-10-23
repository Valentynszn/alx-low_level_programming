#include "main.h"

/**
 * _strchr - Main function to locate a character in a string.
 *
 * @s: The string to search within.
 * @c: The character to find in the string.
 *
 * Return: Always returns 0
 */

char *_strchr(char *s, char c)

{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
	if (s[k] == c)
	return (s + k);
	}
	return (0);
}
