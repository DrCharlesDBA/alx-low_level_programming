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
	int i = 0, src_leng = 0;

	while (src[i++])
		src_leng++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_leng; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
