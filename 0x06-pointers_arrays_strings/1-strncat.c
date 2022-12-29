#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates n bytes of two strong
 * @dest: pointer nput value
 * @src: pointer input value
 * @n: pointer input value
 *
 * Return: the value is the dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
