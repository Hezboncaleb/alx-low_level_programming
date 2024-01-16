#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
  * binary_search - Searches for a value in a sorted array
  * of integers
  * @array: a pointer to the first element of the array
  * @size: the number of elements in array
  * @value: the value to search for
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, the index where the value is located
  */

int binary_search(int *array, size_t size, int value)
{
	int mid, x;
	int left = 0;
	int right = size -1;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (x = left; x <= right; x++)
			printf("%i%s", array[x], x == right ? "\n" : ", ");

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
