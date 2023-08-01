#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list
 * @head: pointer to the first in a linked list
 * @index:  index of the node, starting at 0
 * Return: pointer to the indexed node or Null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int count = 0;

	listint_t *current = head;

	while (current && count < index)

	{
		current = current->next;
		count++;
	}

	return (current ? current : NULL);


}
