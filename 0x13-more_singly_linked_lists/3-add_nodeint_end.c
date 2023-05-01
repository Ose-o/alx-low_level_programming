#include "lists.h"
 /**
 * add_nodeint_end - adds a node at the end of a linked list
 * @h: pointer to the first element in the list
 * @data: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *new_node;
        listint_t *pressure = *head;

        new_node = malloc(sizeof(listint_t));
        if (!new_node)
                return (NULL);

        new_node->n = n;
        new_node->next = NULL;

        if (*head == NULL)
        {
                *head = new_node;
                return (new_node);
        }

        while (pressure->next)
                pressure = pressure->next;

        pressure->next = new_node;

        return (new_node);
}
