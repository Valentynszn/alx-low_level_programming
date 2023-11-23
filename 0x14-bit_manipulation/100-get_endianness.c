#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * This function determines the endianness of the system
 * by checking the byte order. It uses an integer variable,
 * examines its first byte, and returns the endianness of
 * the system.
 *
 * Return: 0 if the system is big endian, 1 if the system
 *	is little endian.
 */

int get_endianness(void)
{
	int c;
	char *d;

	c = 1;
	d = (char *)&c;
	return (*d);
}
