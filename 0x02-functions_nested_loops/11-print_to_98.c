#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * @n: this is the number assigned to begin the counting
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d,  ", n--);
			printf("%d\n", n);
		}

		else
		{
			while (n < 98)
			{
				printf("%d,  ", n++);
				printf("%d\n", n);
			}
		}
	}
i}