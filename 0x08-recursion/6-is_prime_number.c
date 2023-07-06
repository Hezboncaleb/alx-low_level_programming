#include "main.h"
#include <math.h>

/**
 * prime_number_helper - helper function
 * @n: number
 * @i: number
 * Return: 1 if the input integer is a prime number
 * otherwise return 0
 */

int prime_number_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (i <= 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (prime_number_helper(n, i - 1));
}

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: input integer
 * Return: 1 if the input integer is a prime number
 * otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (prime_number_helper(n, n - 1));
}
