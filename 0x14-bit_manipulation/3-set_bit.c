#include "main.h"

/**
 * set_bit - sets a bit at a given index to one
 * @n: the pointer to the num to change
 * @index: the indexto the bit that sets to a1
 *
 * Return: if successful 1, -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
