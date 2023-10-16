#include "main.h"
/**
 * swap_int - values of two ints are swapped
 * @a: int to swap
 * @b: int to swap
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
