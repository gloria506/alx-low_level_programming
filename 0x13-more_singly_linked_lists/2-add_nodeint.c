#include "lists.h"

/**
 * add_nodeint - Entry point
 * Description - 'adds a new node to a linked list'
 * @head: pointer to the first node in linked list
 * @n: const int
 * Return: pointer to new node, or NULL if allocation fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (!new_n) /*if memory allocation fails, return NULL */
		return (NULL);

	new_n->n = n;
	new_n->next = *head;
	*head = new_n;

	return (new_n);
}
