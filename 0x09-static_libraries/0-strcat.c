#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest:input value
 *@src: input value
 *
 *Author: Ose Oriabure
 * Return: void
 */
char *_strcat(char *dest, char *src)

{

	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')

	{
		i++;
	}
	j = 0;
	while (src[i] != '\0')

	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
