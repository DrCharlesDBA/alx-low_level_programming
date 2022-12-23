#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: 1st string pointer
 * @src: 2nd string
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, x = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (dest[x] != '\0')
	{
		dest[i] =src[x];
		x++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
