#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * Author: Ose Oriabure
 * @n: data to insert in that new node
 * @head: pointer to the first node in the list
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
