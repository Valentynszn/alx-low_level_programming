#include "main.h"

 /**
 * set_string - Sets the value of a pointer to a string.
 *
 * @s: Pointer to a pointer that will be updated.
 * @to: The string to assign to the pointer.
 *
 * Return: Always 0.
 */

void set_string(char **s, char *to)

{
	*s = to;

}
