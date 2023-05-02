#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Author:Ose o
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *Pressure;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	Pressure = (*head)->next;
	free(*head);
	*head = pression;

	return (num);
}
