#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Checks whether an integer is a prime number.
 *
 * @n: The number to evaluate for primality.
 *
 * Return: 1 if n is a prime number, 0 if it's not.
 */

int is_prime_number(int n)

{
	if (n <= 1)
	return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Recursively calculates if a number is prime.
 *
 * @n: The number to evaluate for primality.
 * @i: An iterator used for testing divisibility.
 *
 * Return: 1 if n is prime, 0 if it's not.
 */

int actual_prime(int n, int i)

{
	if (i == 1)
	return (1);
	if (n % i == 0 && i > 0)
	return (0);
	return (actual_prime(n, i - 1));
}
