#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Entry point
 * Description - 'a function that prints all elements of listint_t'
 * @h: pointer to linked list
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}

