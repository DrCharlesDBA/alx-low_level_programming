#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area
 * @s: starting address of memory to be filled
 * @b: this is a char
 * @n: this is an un int
 *
 * Return: thisreturns chaacter s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
