#include "lists.h"

/**
 * free_listint - Entry point
 * Description - 'a function that frees a linked list'
 * @head: pointer to linked list to be freed
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
