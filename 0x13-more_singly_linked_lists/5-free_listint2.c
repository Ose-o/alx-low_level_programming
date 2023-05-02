#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 * Author: Ose Oriabure
 */
void free_listint2(listint_t **head)
{
	listint_t *pressure;

	if (head == NULL)
		return;

	while (*head)
	{
		pressure = (*head)->next;
		free(*head);
		*head = pressure;
	}

	*head = NULL;
}
