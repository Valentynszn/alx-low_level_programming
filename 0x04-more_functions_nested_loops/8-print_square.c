#include "main.h"

/**
 * print_square - Print a square with side length 'size'.
 * @size: The size of the square.
 *
 * If size <= 0, print a newline.
 */

void print_square(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i, j;

	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}

