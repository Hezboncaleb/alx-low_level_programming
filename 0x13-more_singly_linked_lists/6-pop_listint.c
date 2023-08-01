#include "lists.h"

/**
 * pop_listint - function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data
 * @head: pointer to the first data of a linked list
 * Return: returns the head node’s data and 0 if the linked list is empty
 */

int pop_listint(listint_t **head)

{

		listint_t *current;
		int data;


		if (head == NULL || *head == NULL)
		{
			return (0);
		}
		current = *head;
		data = current->n;
		*head = (*head)->next;
		free(current);


		return (data);

}
