#include <stdio.h>

/**
 * main - entry point
 * Description: program that prints the alphabet in lowercase and uppercase
 *
 * Return: 0 on success
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
