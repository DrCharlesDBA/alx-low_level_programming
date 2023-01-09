#include <stdio.h>
#include "main.h"

/**
 * main - prints program's name
 * @argc: this denotes arguments number
 * @argv: rguments
 * __attribute__((unused)): an argument for int
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
