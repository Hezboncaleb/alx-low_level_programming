#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position
 * @head: double pointer to the head node of the list
 * @idx: index of the list where the new node should be added starting with 0
 * @n:  value to be added in the new node
 * Return: the address of the new node
 * NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

		listint_t *new_node, *current;
		unsigned int i;

		if (head == NULL)
		return (NULL);

			new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
		return (NULL);

		new_node->n = n;

		if (idx == 0)

		{

			new_node->next = *head;
			*head = new_node;
			return (new_node);

		}


			current = *head;
		for (i = 0; i < idx - 1; i++)

		{
		if (current == NULL)
		return (NULL);
		current = current->next;

		}

			new_node->next = current->next;
			current->next = new_node;

		return (new_node);
}
