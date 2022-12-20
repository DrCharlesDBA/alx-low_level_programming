#include "main.h"

/**
 * _strlen - returns string length
 * @str: this is a string
 * Return: length
 */

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
