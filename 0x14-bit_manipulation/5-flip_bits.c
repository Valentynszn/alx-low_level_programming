#include "main.h"

/**
 * flip_bits - Counts the number of bits required to change
 * from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to be flipped to convert
 *		the first number 'n' to the second number 'm'.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (c = 63; c >= 0; c--)
	{
		current = exclusive >> c;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}
