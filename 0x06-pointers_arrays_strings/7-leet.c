#include "main.h"
#include <stdio.h>
/**
 * leet - function that encodes a string into 1337.
 * @n: the input value of teh function
 *
 * Return: this returns the n value
 */
char *leet(char *n)
{
	int a, b;
	char s1[] = "aAeEoOtTIL";
	char s2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == s1[b])
			{
				n[a] = s2[b];
			}
		}
	}
	return (n);
}
