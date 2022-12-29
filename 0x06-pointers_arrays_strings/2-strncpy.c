#include "main.h"
/**
 * _strncpy - is a function that copies a string
 * @dest: this would be a value to be put into the function
 * @src: one of the iniput values
 * @n: this is value int input
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		j++;
	}
	return (dest);
}
