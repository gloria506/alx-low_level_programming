#include "lists.h"
#include <stdio.h>

/**
  * print_list - Entry point
  * Description - 'it prints all elements of a linked list'
  * @h: a pointer to the linked list
  * Return: the number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
