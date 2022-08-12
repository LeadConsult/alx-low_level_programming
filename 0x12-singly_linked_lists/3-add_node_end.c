#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * * add_node - adds a new node at the beginning of a list_t list.
 * * @head: head of the linked list
 * * @str: string to store in the list
 * * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *old;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new->len = n;
	new->next = NULL;
	old = *head;

	if (old == NULL)
	{
		*head = new;
	}
	else
	{
		while (old->next != NULL)
			old = old->next;
		old->next = new;
	}

	return (*head);
}
