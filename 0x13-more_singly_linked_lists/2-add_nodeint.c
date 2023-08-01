#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = NULL;

	new_head = malloc(sizeof(*new_head));
	if (!new_head)
		return (NULL);

	new_head->n = n;
	if (head && *head)
		new_head->next = *head;
	else
		new_head->next = NULL;

	*head = new_head;
	return (new_head);
}

