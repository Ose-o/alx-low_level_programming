#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @bit_index: index of the bit
 * Author: Ose o
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int bit_index)
{
    int bit_val;

    if (bit_index > 63)
	    return (-1);

    bit_val = (n >> bit_index) & 1;

    return (bit_val);
}
