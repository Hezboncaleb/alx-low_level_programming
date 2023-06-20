#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * Return: 1 on Success
 * On error, -1 is returned and error is set appropriatley
 */

int _putchar (char c)
{

	return (write(1, &c, 1));
}
