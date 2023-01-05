#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: this char is used to reverse a string
 * Return: 1 for true and 0 for false
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recusion(s)));
}
/***
 * _strlen_recursion - the length of a string is returned
 * description: this function calculates length of a string
 * @s: string calculates the string's length
 * Return: string length is returned
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the characters recursively
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
