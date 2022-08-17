#include "lists.h"

/**
 * * listint_len - Function that returns the
 * * number of elements in a linked list
 * * @h: head of the list
 * *
 * * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

