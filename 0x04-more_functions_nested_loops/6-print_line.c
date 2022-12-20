#include "main.h"

/**
 * print_line - prints a line
 * @l: number of times
 * Return: void
 */

void print_line(int l)
{
	while (l-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
