#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: this an int array
 * @n: this counts the quantity of array elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
