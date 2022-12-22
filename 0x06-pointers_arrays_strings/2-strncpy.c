#include "main.h"
/**
 * _strncpy - this function is used to copy a string
 * @dest: this points to the char's destination
 * @src: this points to source char
 * @n: number of bytes
 * Return: this returns a char data type
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && *(src + a) != '\0')
	{
		*(dest + a) = *(src + a);
		a++;
	}
	while (a != n)
		dest[a++] = '\0';
	return (dest);
}
