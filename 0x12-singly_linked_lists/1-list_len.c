#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list.h"

/**
 * list_len - check the code for Holberton School students.
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (head)
	{
		count++;
		head = headi:->next;
	}
	return (count);
}
