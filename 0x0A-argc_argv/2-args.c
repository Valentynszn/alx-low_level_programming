#include <stdio.h>
#include "main.h"

/**
 * main - Prints all received arguments
 * @argc: Number of arguments received
 * @argv: Array containing the received arguments
 *
 * Return: Always returns 0 to indicate successful execution
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
