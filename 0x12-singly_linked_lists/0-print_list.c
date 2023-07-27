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
	list_t const *l = 0;

	if (!h)
		return (n_nodes);

	l = h;
	++n_nodes;
	do {
		if (!l->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		l = l->next;
		++n_nodes;
	} while (l);
	return (n_nodes);
}

