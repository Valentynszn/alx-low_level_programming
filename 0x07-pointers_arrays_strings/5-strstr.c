#include "main.h"

/**
 * _strstr - Find the first occurrence of 'needle' in 'haystack'.
 *
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)

{
	for (; *haystack != '\0'; haystack++)
	{
	char *I = haystack;
	char *P = needle;

	while (*I == *P && *P != '\0')
	{
	I++;
	P++;
	}
	if (*P == '\0')
	return (haystack);
	}
	return (0);
}
