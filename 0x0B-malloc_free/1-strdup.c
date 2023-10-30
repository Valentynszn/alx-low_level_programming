#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated memory space
 *	containing a duplicate of the string passed as parameter.
 * @str: The string to be duplicated.
 *
 * Return: If str is NULL or memory allocation fails - NULL.
 *	Otherwise - a pointer to the duplicated string.
 */

char *_strdup(char *str)

{
	char *duplicate;
	unsigned int index, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < len; index++)
	{
		duplicate[index] = str[index];
	}
	duplicate[len] = '\0';
	return (duplicate);
}
