#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing a binary number
 *
 * This function calculates and returns the unsigned int value
 * of a binary number represented by the string 'b'. It parses
 * through the string, validating each character to ensure it
 * contains only '0' or '1' characters. If the input string 'b'
 * is invalid (contains characters other than '0' or '1') or
 * NULL, the function returns 0. Otherwise, it computes and
 * returns the decimal value of the binary number.
 *
 * Return: The decimal value of the binary number, or 0 if
 * error (invalid input)
 */
unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (c = 0; b[c] != '\0'; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
	}
	for (c = 0; b[c] != '\0'; c++)
	{
		num <<= 1;
		if (b[c] == '1')
			num += 1;
	}
	return (num);
}
