#include "main.h"

/**
 * puts_half - Prints every other character of a string
 * @str: The string
 */

void puts2(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');

}
