#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Print a name using a function pointer.
 * @name: The string to be processed.
 * @f: A pointer to a function for processing the name.
 *
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

