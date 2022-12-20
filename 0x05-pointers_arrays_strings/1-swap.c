#include <stdio.h>

/**
 * swap_int - this swaps values of given integers
 * @x: This is the first int
 * @y: This is the second intfor swap
 * Return: void
 */
void swap_int(int *x, int *y)
{
	int a;

	a = *x;
	*x = *y;
	*y = a;
}       
