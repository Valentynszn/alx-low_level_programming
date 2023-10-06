#include <stdio.h>

/**
 * main - Outputs the lowercase alphabet in reverse order,
 * followed by a newline.
 *
 * Return: Always 0 (indicating success).
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)

	putchar(letter);

	putchar('\n');

	return (0);
}
