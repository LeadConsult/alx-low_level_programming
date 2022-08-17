#include "lists.h"

/**
 * * sum_listint - Calculates the sum of the integers in a list
 * * @head: Pointer to the first element of a list
 * * Return: An integer representing d sum of values-if list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
