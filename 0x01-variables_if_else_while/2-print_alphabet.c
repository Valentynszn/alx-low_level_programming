#include <stdio.h>

/**
 * main - A program that displays the lowercase alphabet
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}
