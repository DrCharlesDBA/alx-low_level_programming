#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add 2 numbers and returns the sum
 * @a: this is the 1st number
 * @b: this is the 2nd number
 * Return: outputs sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - outputs the difference between 2 numbers
 * @a: 1st  number
 * @b: 2nd number
 * Return: Thedifference of a nd b
 */
int op_sub(int a, int b)
{
	return(a - b);
}
/**
 * op_mul - Returns the output from two numbers
 * @a: this is the 1st number
 * @b: the 2nd number
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: this is the 1st number
 * @b: this is the 2nd number
 * Return: The quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
