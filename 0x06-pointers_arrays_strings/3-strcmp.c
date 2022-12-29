#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: this is a character value input
 * @s2: this is a character value input
 *
 * Return: s1[x] - s2[x]
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}
