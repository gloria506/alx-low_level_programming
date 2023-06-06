#include "lists.h"

/**
 * pop_listint - Entry point
 * Description - 'deletes the head node of a linked list'
 * @head: pointer to the first element of linked list
 * Return: the data inside linked list or 0 if it is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int nodes;

	if (!head || !*head)
		return (0);

	nodes = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (nodes);
}

