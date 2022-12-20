#include <stdio.h>
#include "main.h"

/**
 * print_square - prints square
 * @size: is the parameter used
 * Returns: This returns void
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < (size - 1); b++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
