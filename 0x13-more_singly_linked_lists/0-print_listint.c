#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: head of linklist node
 * Return: the number of nodes
 * Author: Ose Oriabure
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->distr);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
