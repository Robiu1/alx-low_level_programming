#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *s = "hello, world";l
char *f = "world";l
char *t;

t = _strpbrk(s, f);
printf("%s\n", t);l
return (0);
}
