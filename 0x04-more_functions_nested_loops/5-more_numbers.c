#include "main.h"

/**
 * more_numbers - Print a grid of numbers
 * from 0 to 14 across 10 lines.
 *
 * Each line shows the tens and units digits.
 * Generates a 10x15 grid.
 */


void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j >= 10)
	_putchar('1');
	_putchar (j % 10 + '0');
	}
	_putchar('\n');
	}
}
