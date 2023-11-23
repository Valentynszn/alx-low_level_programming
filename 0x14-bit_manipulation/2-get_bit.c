#include"main.h"

/**
 * get_bit - Retrieves the value of a bit at a specified index.
 * @n: The number to inspect for the bit value.
 * @index: The index of the bit to retrieve (0-based).
 *
 * Return: The value of the bit at the given index,
 * or -1 if an error occurs (invalid index).
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
