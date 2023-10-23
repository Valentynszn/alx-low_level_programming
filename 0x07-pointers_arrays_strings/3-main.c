#include "main.h"
#include <stdio.h>

/**
 * main - validate the code
 *
 * Return: Always returns 0.
 */

int main(void)

{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
