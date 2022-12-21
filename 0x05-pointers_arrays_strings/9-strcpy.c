#include "main.h"

/**
 * _strcpy - This copies string
 * @dest: this is the destination
 * @src: this is also the source
 * Return: The pointer is returned to the destination
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (*(src + x) != '\0')
	{
		*(dest + x) = *(src + x);
		x++;
	}
	*(dest + x) = '\0';

	return (dest);
}
