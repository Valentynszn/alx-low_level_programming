#include <stdio.h>

/**
 * main - Display single-digit numbers in base 10, starting from 0,
 *        and ending with a newline character.
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	}

	putchar('\n');

	return (0);
}
