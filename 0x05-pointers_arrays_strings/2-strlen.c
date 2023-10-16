#include "main.h"

/**
 * _strlen - length of a str returns
 * @s: string
 * Return: the length
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
