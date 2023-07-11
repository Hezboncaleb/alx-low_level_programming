#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter
 * @str: string to copy
 * Return: a pointer to the duplicated string on success
 * or else NULL
 */

char *_strdup(char *str)
{

	int i, j;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	duplicate = malloc(i * sizeof(*duplicate) + 1);
	if (duplicate == NULL)
		return (NULL);

	for (j = 0; j < i; j++)

		duplicate[j] = str[j];
	duplicate[j] = '\0';

	return (duplicate);
}

