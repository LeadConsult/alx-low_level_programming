#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 *  * add_node - adds a new node at the beginning of a list_t list.
 *   * @head: head of the linked list
 *    * @str: string to store in the list
 *     * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int c;

	for (c = 0; str[c] != '\0'; c++)
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = c;
	new_node->next = *head;
	*head = new_node;

	return (*head);

}
