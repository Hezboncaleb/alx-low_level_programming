#include "main.h"

/**
 * sqrt_func - helper function to solve _sqrt_recursion
 * @n: number whose square root is to be determined
 * @root: number to determine if square root
 * Return: -1 if natural number has no square root
 * other wise square root
 */

int sqrt_func(int n, int root)
{
	if ((root * root) > n)
	{
		return (-1);
	}
	else if ((root * root) == n)
	{
		return (root);
	}
	else
	{
		return (sqrt_func(n, root + 1));
	}
}

/**
 *_sqrt_recursion -  a function that returns the
 * natural square root of a number
 * @n: number whose square root is to be determined
 * Return: -1 if number has no square root
 * otherwise squareroot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_func(n, 0));
}
