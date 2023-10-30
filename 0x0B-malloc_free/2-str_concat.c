#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @str1: The base string to concatenate.
 * @str2: The string to append to str1.
 *
 * Return: If concatenation fails - NULL.
 *	Otherwise - a pointer to a newly-allocated memory space
 *			containing the concatenated strings.
 */

char *str_concat(char *str1, char *str2)

{
	char *concatenated;
	int i, j = 0, length = 0;

	if (str1 == NULL)
	{
		str1 = "";
	}
	if (str2 == NULL)
	{
		str2 = "";
	}

	while (str1[length] || str2[length])
	{
		length++;
	}

	concatenated = malloc(sizeof(char) * (length + 1));

	if (concatenated == NULL)
	{
		return (NULL);
	}

	for (i = 0; str1[i]; i++)
	{
		concatenated[j++] = str1[i];
	}
	for (i = 0; str2[i]; i++)
	{
		concatenated[j++] = str2[i];
	}

	concatenated[length] = '\0';
	return (concatenated);
}
