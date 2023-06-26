#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: first integer a is swaped with b
 * @b: second integer b is  swaped with a
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

