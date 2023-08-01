#include "lists.h"

/**
 * sum_listint - finds the sum of all the datat in a linked list.
 * @head: first node in a linked list
 * Return: the sum of all data or 0 if empty
 */

int sum_listint(listint_t *head)

{
	int sum = 0;

	listint_t *current = head;

	while (current)

	{

		sum += current->n;
		current = current->next;

	}

	return (sum);

}
