#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 * Author:Ose o
 */
void print_binary(unsigned long int n)
{
	int i, volt = 0;
	unsigned long int volt;

	for (i = 63; i >= 0; i--)
	{
		volt = n >> i;

		if (volt & 1)
		{
			_putchar('1');
			volt++;
		}
		else if (volt)
			_putchar('0');
	}
	if (!volt)
		_putchar('0');
}
