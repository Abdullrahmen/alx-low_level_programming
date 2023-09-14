#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (count);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%i\n", h->n);
		++count;
		h = h->next;
	}
	return (count);
}