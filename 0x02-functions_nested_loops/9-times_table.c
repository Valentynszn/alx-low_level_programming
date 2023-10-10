#include "main.h"

/**
 * times_table - Prints the multiplication table for 9.
 *
 * Description: This function prints the multiplication table for
 * for the number 9 displaying the results in a grid format.
 *
 * Return: void
 */


void times_table(void)
{
	int row, column, product, tens, ones;


	for (row = 0; row <= 9; row++)
	{
	for (column = 0; column <= 9; column++)
	{
	product = row * column;
	tens = product / 10;
	ones = product % 10;
	if (column == 0)
	{
	_putchar('0');
	}
	else if (product < 10)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(ones + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(tens + '0');
		_putchar(ones + '0');
	}
	}
	_putchar('\n');
	}
}
