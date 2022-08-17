#include "lists.h"

/**
 * * free_listint2 - Function that frees a linked list
 * * @head: head of the list.
 * *
 * * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *temporary;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temporary = current) != NULL)
		{
			current = current->next;
			free(temporary);
		}
		*head = NULL;
	}
}
