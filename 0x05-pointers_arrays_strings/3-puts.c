#include "main.h"

/**
 * _puts -string printing function
 * @str: the printed string
 * Return: prints a void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
