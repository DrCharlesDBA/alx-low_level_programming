#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string
 * @str: this is a pointer to string parameters
 * Return: *str
 */

char *rot13(char *str)
{
	int a;
	int b;
	char db[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dbmix[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
			if (str[a] == db[b])
			{
				str[a] = dbmix[b];
				break;
			}
	}
}
return (str);
}
