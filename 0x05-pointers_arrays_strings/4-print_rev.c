#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: string to be printed
 */

void print_rev(char *s)
{

	int  rev, len;

	len = 0;

	for (; s[len] != '\0';)
	{
		len++;
	}

	for (rev = len - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}

	_putchar('\n');

}
