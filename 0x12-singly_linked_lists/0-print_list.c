#include "lists.h"
#include <stdio.h>

/**
 * * print_list - prints all elements.
 * * @h: pointer
 * * Return: number of node
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;
	const list_t *c = h;

	while (c != NULL)
	{
		printf("[%d] %s\n", c->len,
				c->str != NULL ? c->str : "(nil)");
		c = c->next;
		node++;
	}

	return (node);

}

