#include <stdio.h>
#include "main.h"

/**
 * _putchar -this function writes cha c to stdout
 * @c: this is the char c
 *
 * Return: on success = 1
 * On error = -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
