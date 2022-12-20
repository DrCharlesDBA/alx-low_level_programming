#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @a: parameter
 * Return: returns void
 */

void print_diagonal(int a)
{
	int len, space;

	if (a > 0)
	{
		for (len = 0; len < a; len++)
		{
			for (space = 0; space < len; space++)
			{
				putchar(' ');
			}

			putchar('\\');

			if (len == (a - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
