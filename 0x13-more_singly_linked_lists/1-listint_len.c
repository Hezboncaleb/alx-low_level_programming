#include "lists.h"

/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list
 * @h: pointer to the head of a list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t numelem = 0;

	while (h != NULL)
	{
		h = h->next;
		numelem++;
	}
	return (numelem);
}
