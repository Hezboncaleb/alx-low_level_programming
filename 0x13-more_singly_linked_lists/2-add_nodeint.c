#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the first adress in the list
 * @n: data to be inserted in the new node
 * Return: pointer to the new Node
 * NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

		if (!new_node)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = *head;

		*head = new_node;


	return (new_node);

}
