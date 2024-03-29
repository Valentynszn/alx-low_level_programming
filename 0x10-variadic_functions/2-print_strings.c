#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Outputs strings followed by a new line.
 * @separator: The string printed between strings (if not NULL).
 * @n: The count of strings passed to the function.
 * @...: Variable number of strings to be printed.
 *
 * Description: If the separator is NULL, it is not printed.
 *		If one of the strings is NULL, prints "(nil)" instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
