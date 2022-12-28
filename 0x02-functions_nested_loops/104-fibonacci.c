#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: void
 */

int main(void)
{
	unsigned long int x = 1, y = 2;
	unsigned long int n;

	for (n = 0; n < 49; n++)
	{
		printf("%lu, %lu", x, y);
		if (n != 48)
		{
			putchar(',');
			putchar(' ');
		}
		x = x + y;
		y = x + y;
	}
	putchar('\n');
	return (0);
}
