#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	unsigned int n_nodes = 0;
	list_t const *h = 0;

	if (!list_t)
		return (n_nodes);

	h = list_t;
	++n_nodes;
	do {
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		++n_nodes;
	} while (h)
	return (n_nodes);
}

