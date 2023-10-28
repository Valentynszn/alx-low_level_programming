#include <stdio.h>
#include "main.h"

/**
 * main - Prints the count of arguments passed to the program
 * @argc: Number of arguments received by the program
 * @argv: Array of strings containing the arguments
 *
 * Return: Always returns 0 to indicate successful execution
 */

int main(int argc, char *argv[])

{
	(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);
	return (0);
}
