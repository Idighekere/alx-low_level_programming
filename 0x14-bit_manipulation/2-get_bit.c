#include "main.h"
#include <stdio.h>

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: is the number
 * @index: is the index
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int number = 1 << index;

	return ((n & index) != 0);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
}
