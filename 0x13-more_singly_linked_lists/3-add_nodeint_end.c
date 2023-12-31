#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = 0, *i = 0;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	if (!head || !(*head))
		*head = new;
	else
	{
		i = *head;
		while (i->next)
			i = i->next;
		i->next = new;
	}
	return (new);
}

