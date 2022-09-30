#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node to end of a linked list
 * @head: double pointer to the beginning of linked list
 * @n: value to add to the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *brief;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	brief = *head;
	while (brief->next != NULL)
		brief = brief->next;
	brief->next = new;
	new->prev = brief;
	return (new);
}
