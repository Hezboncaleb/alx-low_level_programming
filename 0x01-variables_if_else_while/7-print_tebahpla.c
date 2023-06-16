#include <stdio.h>

/**
 * main - entry point
 * Description: program that prints the lowercase alphabet in reverse
 *
 * Return: 0 on success
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
