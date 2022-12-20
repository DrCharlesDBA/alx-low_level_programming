#include <stdio.h>

/**
 * main - largest prime factorof a number is printed
 * Return: void or 0
 */

void main(void)
{
	long num = 612852475143;
	int a;

	while (a++ < num / 2)
	{
		if (num % a == 0)
		{
			num / = 2;
			continue;
		}

		for (a = 3; a < num / 2; a += 2)
		{
			if (num % a == 0)
				num / = a;
		}
	}
	printf("%1d\n", number);
		return (0);
	}
