#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the cha to c to sdout
 * @c: the char to print
 *
 * Return: if success = 1, -1 if fail
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
