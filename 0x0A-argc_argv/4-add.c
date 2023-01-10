#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num -check - string there are digit
 * @str: this will be used as an array str
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int count; /*Variabled declared */

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count])) /*on this str is checked for a digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - the functions prints program's name
 * @argc: Count arguments
 * @argv: this is for arguments
 *
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count];
					sum += str_to_int;
					}
					else
					{
					printf("Error\n");
					return (1);
					}
					count++;
					}
					printf("%d\n", sum;
						return (0);
						}
