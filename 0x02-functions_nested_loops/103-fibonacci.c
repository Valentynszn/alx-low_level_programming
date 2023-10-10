#include <stdio.h>

/**
 * main - Entry point for a program to calculate the sum
 * of even Fibonacci numbers less than 4,000,000.
 *
 * Description: This program calculates the sum of even
 * Fibonacci numbers up to 4,000,000 and prints the result.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;


	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
		sum += k;
		j = k - j;
		++i;
	}
	printf("%ld", sum);
	return (0);
}
