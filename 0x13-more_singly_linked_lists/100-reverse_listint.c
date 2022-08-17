#include "lists.h"

/**
 * * reverse_listint - a function that reverses a listint_t linked list.
 * * @head: head of a list.
 * *
 * * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *x;
	listint_t *y;

	x = NULL;
	y = NULL;

	while (*head != NULL)
	{
		y = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = y;
	}

	*head = x;
	return (*head);
}
