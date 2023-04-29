#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code for Holberton School students.
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t list_len(const list_t *head)
{
	int count = 0;

	while (head)
	{
		count++;
		head = head->next;
	}
	return (count);
}
