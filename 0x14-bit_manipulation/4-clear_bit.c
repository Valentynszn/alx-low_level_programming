#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a specified index.
 * @n: Pointer to the number to modify.
 * @index: The index at which to clear the bit (0-based).
 *
 * Return: 1 if successful, -1 if an error occurred (invalid index).
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
