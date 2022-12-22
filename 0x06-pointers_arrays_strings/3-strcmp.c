#include "main.h"

/**
 * _strcmp -this function compares pointers to 2 strings
 * @s1: pointer to the first string to be connected
 * @s2: 2nd pointer to the second string
 * Return: 0 if s1 equals s2, - if s1 < s2, + if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
