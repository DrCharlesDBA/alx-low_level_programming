#include "main.h"
#include <stdio.h>

/**
 * print_number - function prints an integer
 * @a: The integer value to be printed
 * Return: void
 */

void print_number(int a)
{
	unsigned int x = a;

	if (a < 0)
	{
		a *= -1;
		x = a;
		_putchar('-');
	}
	x /= 10;
	if (x != 0)
		print_number(x);
	_putchar((unsigned int) a % 10 + '0');
}
