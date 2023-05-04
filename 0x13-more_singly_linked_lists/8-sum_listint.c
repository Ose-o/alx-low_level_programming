#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * Ose oriabure
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *pressure = head;

    while (pressure)
    {
        sum += pressure->n;
        pressure = pressure->next;
    }

    return (sum);
}
