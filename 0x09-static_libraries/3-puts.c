#include "main.h"
#include<stdio.h>
/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string to print
 */
void_puts(char *str)
{
	_put("%s\n", str);
}
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	_puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
