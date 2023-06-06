#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 * Description - 'a function that returns the nth node of a listint_t'
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node being seatrched for or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
