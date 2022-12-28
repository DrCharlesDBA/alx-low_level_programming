#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 * Return: void
 */
int main(void)
{
	unsigned long fiboA = 0, fiboB = 1, fiboX;
	float fibosum;

	while (1)
	{
		fiboX = fiboA + fiboB;
		if (fiboX > 4000000)
			break;

		if ((fiboX % 2) == 0)
			fibosum += fiboX;

		fiboA = fiboB;
		fiboB = fiboX;
	}
	printf("%.0f\n", fibosum);

	return (0);
}
