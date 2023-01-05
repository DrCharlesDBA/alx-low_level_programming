#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: This makes up the character s
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
