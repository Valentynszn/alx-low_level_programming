#include "main.h"

/**
 * largest_number - Return the largest of 3 integers.
 * @a: The first number
 * @b: The second number
 * @c: The third number
 * Return: The largest number
 */

int largest_number(int a, int b, int c)
{
int largest;
if (a > b && a > c)
{
largest = a;
}
else if (a > b && c > a)
{
largest = c;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}

