#include "lists.h"

/**
 * * find_listint_loop - a function that finds the loop in a linked list.
 * * @head: head of a list.
 * *
 * * Returns: The address of the node where the loop starts,
 * * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop1;
	listint_t *loop2;

	loop1 = head;
	loop2 = head;
	while (head && loop1 && loop1->next)
	{
		head = head->next;
		loop1 = loop1->next->next;

		if (head == loop1)
		{
			head = loop2;
			loop2 =  loop1;
			while (1)
			{
				loop1 = loop2;
				while (loop1->next != head && loop1->next != loop2)
				{
					loop1 = loop1->next;
				}
				if (loop1->next == head)
					break;

				head = head->next;
			}
			return (loop1->next);
		}
	}

	return (NULL);
}
