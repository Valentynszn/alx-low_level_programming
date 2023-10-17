#include "main.h"

/**
 * print_array - Prints a specified number of elements from an array.
 * @a: The name of the array.
 * @n: The number of elements from the array to be printed.
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
