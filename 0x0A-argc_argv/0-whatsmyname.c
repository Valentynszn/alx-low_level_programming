#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the current program
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments
 *
 * Return: Always returns 0 to indicate successful execution
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);
	return (0);
}
