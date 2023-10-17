#include "main.h"

/**
 * puts_half - The function displays the latter part of a string.
 * If the string's length is odd, it prints
 * the latter portion after rounding up.
 * @str: The input string to print half of.
 * Return: half of the input
 */

void puts_half(char *str)
{
	int a, n, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
