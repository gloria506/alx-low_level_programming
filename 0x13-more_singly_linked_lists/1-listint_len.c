#include "lists.h"

/**
 * listint_len - Entry point
 * Description - 'a function that returns the number of elements
 *                in a linked list'
 * @h: pointer to linstint_t
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
