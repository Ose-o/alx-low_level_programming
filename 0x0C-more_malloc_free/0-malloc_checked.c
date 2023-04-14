#include "main.h"

/**
 * malloc_checked - cause normal process termination with a status value of 98
 *
 * @b: allocated memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int c)
{
	void *i;

	i = malloc(c);
	if (i == NULL)
		exit(98);
	return (i);
}
