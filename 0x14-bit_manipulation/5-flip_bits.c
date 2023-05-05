#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: 1st number to flip
 * @m: 2nd number to flip
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = m ^ n;
	unsigned int y = 0;

	do {
		y += x & 1;
		x >>= 1;
	} while (x);
	return (y);
}
