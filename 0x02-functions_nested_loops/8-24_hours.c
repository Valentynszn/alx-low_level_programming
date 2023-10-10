#include "main.h"

/**
 * jack_bauer - Prints every minute of the day in the format HH:MM.
 *
 * Description: This function prints the time in HH:MM format, starting from
 *              00:00 (midnight) to 23:59 (one minute before midnight).
 *
 * Return: No return value (void).
 */

void jack_bauer(void)

{
	int a, b, c, d;


	for (a = 0; a <= 2; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
	{
	for (c = 0; c <= 5; c++)
	{
	for (d = 0; d <= 9; d++)
	{
	_putchar(a + '0');
	_putchar(b + '0');
	_putchar(58);
	_putchar(c + '0');
	_putchar(d + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}
