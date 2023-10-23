#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix.
 *
 * @size: The size of the square matrix.
 * @a: The 2D array representing the matrix.
 *
 * Return: Always 0
 */

void print_diagsums(int *a, int size)

{
	int count1;
	int count2;
	int x;

	count1 = 0;
	count2 = 0;

	for (x = 0; x < size; x++)
	{
	count1 = count1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
	count2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", count1, count2);
}
