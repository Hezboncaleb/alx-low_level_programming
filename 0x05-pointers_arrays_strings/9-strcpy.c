#include "main.h"

/**
 * _strcpy - Copies the string pointed to by @src
 * @dest: buffer pointed to
 * @src: The string to copy
 *
 * Return: A pointer to dest
 */

char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	for (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
