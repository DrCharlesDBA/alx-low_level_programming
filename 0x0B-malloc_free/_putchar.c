#include "main.h"
#include <stdio.h>
/**
 * _putchar - this functionwrites char to stdout
 * @c: The char to print
 * Return: On Success 1.
 * On error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
