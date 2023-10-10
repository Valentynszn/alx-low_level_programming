#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - Prints numbers from 'n' to 98.
 *
 * Description: This function prints numbers starting from 'n' and counts
 * up or down to 98, depending on whether 'n' is less than or greater than 98.
 *
 * @n: The starting number.
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
		printf("%d, ", n);
	}
	}
	}
}
