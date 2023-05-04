#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Ose Oriabure
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *sheep, *goat;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	sheep = head->next;
	goat = (head->next)->next;

	while (goat)
	{
		if (sheep == goat)
		{
			sheep = head;
			while (sheep != goat)
			{
				nodes++;
				sheep = sheep->next;
				goat = goat->next;
			}

			sheep = sheep->next;
			while (sheep != goat)
			{
				nodes++;
				sheep = sheep->next;
			}

			return (nodes);
		}

		sheep = sheep->next;
		goat = (goat->next)->next;
	}

	return (0);

}
/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, index = 0;

	count = looped_listint_len(head);

	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < count; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}
