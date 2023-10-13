#include "main.h"

/**
 * print_line - Draw horizontal line with underscores.
 * @n: Number of underscores to print.
 *
 * If n <= 0, print newline character.
 */

void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i;

	for (i = 1; i <= n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}

}
