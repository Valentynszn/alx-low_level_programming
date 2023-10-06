#include <stdio.h>

/**
 * main - A program that prints the lowercase alphabet followed by a newline.
 *
 * Return: Always returns 0.
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
