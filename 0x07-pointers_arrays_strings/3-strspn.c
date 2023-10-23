#include "main.h"

/**
 * _strspn - Main function
 *
 * @s: The string to be searched.
 * @accept: The characters to match in the string.
 *
 * Return: The number of bytes in the initial segment of 's'
 *         that consist only of characters from 'accept'.
 */

unsigned int _strspn(char *s, char *accept)

{

	unsigned int _strspn(char *s, char *accept);
	unsigned int i = 0;
	int k;

	while (*s)
	{
	for (k = 0; accept[k]; k++)
	{
	if (*s == accept[k])
	{
	i++;
	break;
	}
	else if (accept[k + 1] == '\0')
	return (i);
	}
	s++;
	}
	return (i);
}
