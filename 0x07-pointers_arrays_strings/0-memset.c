#include "main.h"
#include <stdio.h>

/**
 *_memset - A function that fills memory with a constant byte
 * @n: First bytes of the memory area
 * @b: constant byte
 * @s: Memory area pointed to
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)

	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}

