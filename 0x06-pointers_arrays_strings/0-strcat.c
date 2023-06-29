#include "main.h"

/**
 *_strcat -  a function that concatenates two strings
 * @dest: points to the string to be concatenated
 * @src: points to source string to be appended
 * Return: pointer to a dest string
 */

char *_strcat(char *dest, char *src)
{
	int array = 0, d_count = 0;

	while (dest[array++])
	{
		d_count++;
	}

	for (array = 0; src[array]; array++)
	{
		dest[d_count++] = src[array];
	}

	return (dest);
}
