#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the array's int n elements
 * @a: the int array
 * @n: Array Quantity that will be printed
 * Return: this returns a void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j <  n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
