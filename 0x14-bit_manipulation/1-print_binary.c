#include "main.h"

/**
 * _pow - Calculates the power of a base.
 * @base: The base value.
 * @power: The power value.
 *
 * Return: The result of raising 'base' to the power of 'power'.
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int b;

	num = 1;
	for (b = 1; b <= power; b++)
		num *= base;
	return (num);
}

/**
 * print_binary - Prints a number in binary notation.
 * @n: The number to print in binary.
 *
 * This function prints the binary representation of
 * the number 'n'. It utilizes bitwise operations to
 * extract each bit of 'n' and print it in binary
 * format by looping through each bit, starting from
 * the most significant bit and printing it until
 * the least significant bit.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
