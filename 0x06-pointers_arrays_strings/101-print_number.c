#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: int parameter value
 * Return: 0
 */
void print_number(int n)
{
	unsigned int ui;

	ui = n;

	if (n < 0)
	{
		_putchar('-');
		ui = -n;
	}
	if (ui / 10 != 0)
	{
		print_number(ui / 10);
	}
	_putchar((ui % 10) + '0');
}
