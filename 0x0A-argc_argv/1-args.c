#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: this shows number of arguments
 * @argv: this shows the array of arguments
 *
 * Return: void or 0 upon success
 */
int main(int argc, char *argv[])
{
	(void) argv; /* Let us not consider the argv declared*/
	printf("%d\n", argc - 1);

	return (0);
}
