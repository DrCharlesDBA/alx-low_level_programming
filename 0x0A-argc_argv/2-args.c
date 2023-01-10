#include <stdio.h>
#include "main.h"

/**
 * main - this prints all received arguments
 * @argc: this is san int argument
 * @argv: array of  char argument
 *
 * Return: Always 0 (Success)
 */
int main(int  argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
