#include "main.h"

/**
 *_strlen_recursion -  a function that returns the length of a string
 * @s: character to a pointer
 * Return: String length
 */

int _strlen_recursion(char *s)
{
	int longint = 0;

	if (*s == '\0')
	{
		return (0);
	}
	longint = 1 + _strlen_recursion(s + 1);
	return (longint);

}
