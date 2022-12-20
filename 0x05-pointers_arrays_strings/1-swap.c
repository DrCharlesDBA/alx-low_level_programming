#include <stdio.h>

/**
 * swap_int - swaps values of given int
 * @x: this is the first int
 * @y: this is the second in for swap
 * Return: void
 */

void swap_int(int *x, int *y)
{
	int a = *x;

	*x = *y;
	*y = a;
}
