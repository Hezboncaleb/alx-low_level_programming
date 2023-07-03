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
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}

	}
	return (NULL);
}
