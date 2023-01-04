#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area
 * @s: This is a pointer to the memory
 * @c: The character to fill the memory
 * @n: This number is used for bytes
 * description: this function fills memory with a constant.
 *
 * Return: a pointer is returned of @s
 */

char *_memset(char *s, char c, unsigned int n)
{
int x;
for (; n > 0; x++)
{
s[x] = c;
x--;
}
return (s);
}
