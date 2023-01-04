#include "main.h"
/**
 * _strchr -  This function locates a character in a string
 * @s: this is a character data type
 * @c: this input is a character
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int a = 0;

for (; s[a] >= '\0'; a++)
{
if (s[a] == c)
return (&s[a]);
}
return (0);
}
