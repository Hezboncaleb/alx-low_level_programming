#include "main.h"
#include <stdio.h>

/**
 *_memcpy - A function that copies memory area
 * @n: bytes copied from memory area
 * @src: memory area 1
 * @dest: memory area 2
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p_dest = dest;
	char *p_src = src;

	while (n > 0)
	{
		*p_dest = *p_src;
		p_dest++;
		p_src++;
		n--;
	}
	return (dest);
}

