#include "main.h"

/**
 * char *_strcpy - Copies the string pointed to by @src
 * @dest: buffer pointed to
 * @src: The string to copy
 *
 * Return: A pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
