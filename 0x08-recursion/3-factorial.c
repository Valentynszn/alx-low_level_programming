#include "main.h"

/**
 * factorial - Calculate the factorial of a non-negative integer.
 *
 * @n: The non-negative integer for which the factorial is calculated.
 *
 * Return: The factorial of the input 'n'.
 */

int factorial(int n)

{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}

