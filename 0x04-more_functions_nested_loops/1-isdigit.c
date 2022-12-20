#include "main.h"

/**
 * _isdigit - checkeither a character is a digit
 * @c: this is a character to be checked
 * Return: 1 if it is or 0 in not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
