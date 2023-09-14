#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *iter = NULL;

	if (!head)
		return;
	while (head->prev)
		head = head->prev;

	while (head->next)
	{
		iter = head->next;
		free(head->n);
		free(head);
		head = iter;
	}
	free(head->n);
	free(head);
}
