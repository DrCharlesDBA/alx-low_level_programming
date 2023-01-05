#include "main.h"

int actaul_prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (acual_prime(n, n - 1));
}
/**
 * actual_prime - calculates a number to confirm prime recursiveness
 * @n: number used for number to evaluate
 * @i: this is an iterator
 * Return: 1 when prime rather is 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (acual_prime(n, i - 1));
}
