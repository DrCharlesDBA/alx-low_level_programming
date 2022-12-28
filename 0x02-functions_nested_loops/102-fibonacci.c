#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Void and prints the first 50 Fibonacci numbers
 */
int main(void)
{
	long int x = 1, y = 2;
	int n;

	for (n = 0; n < 25; n++)
{
	printf("%d, %d", x, y);
	if (n != 24)
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
