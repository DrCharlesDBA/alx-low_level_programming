#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program
 * Return: generated passwor return being 0
 */

int main(void)
{
	char a;
	int x;

	srand(time(0));
	while (x <= 2645)
	{
		a = rand() % 128;
		x += a;
		putchar(a);
	}
	putchar(2772 - x);

	return (0);
}
