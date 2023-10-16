#include "main.h"

/**
 * _puts - Outputs a string followed by a newline to the standard output.
 * @str: The string to be printed.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
