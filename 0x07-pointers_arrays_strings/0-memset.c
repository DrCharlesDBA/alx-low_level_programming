#include <main.h>

/**
 * _memset - fills the first n bytes of the memory area
 * @s: This is a pointer to the memory
 * @c: The character to fill the memory
 * @n: This number is used for bytes
 * description: this function fills memory with a constant.
 *
 * Return: a pointer is returned of @s
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int ui;

	while (ui < n)
	{
		s[ui] = c;
		ui++;
	}
	return (s);
}
