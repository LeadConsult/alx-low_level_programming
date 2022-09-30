#include "lists.h"

/**
 * add_dnodeint - adds a new node at beginning of a dlistint_t list.
 * @head: pointer to first element of the list.
 * @n: int to set in new node.
 * Return: address of new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
