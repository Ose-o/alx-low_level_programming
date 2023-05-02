#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Author: Ose O
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *low = head;
	listint_t *high = head;

	if (!head)
		return (NULL);

	while (low && high && high->next)
	{
		high = high->next->next;
		low = low->next;
		if (high == low)
		{
			low = head;
			while (low != high)
			{
				low = low->next;
				high = high->next;
			}
			return (high);
		}
	}

	return (NULL);
}

