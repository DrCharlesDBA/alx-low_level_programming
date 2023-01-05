#include "main.h"
/**
 * _strlen_recursion - this function returns lunght of a string
 * @s: This is a string that the function keeps
 * Return: an int is returned
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
