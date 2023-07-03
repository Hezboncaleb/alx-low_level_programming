#include "main.h"
#include <stdio.h>

/**
 *_strchr - Function that locates a character in a string
 * @c: character of occurencen
 * @s: string
 * Return: Null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
