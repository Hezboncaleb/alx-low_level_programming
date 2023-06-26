#include "main.h"

/**
 * _strlen - A functions that returns the length of a string
 * @s: length of the string to get
 *
 * Return: length on Success
 */

int _strlen(char *s)
{

	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
