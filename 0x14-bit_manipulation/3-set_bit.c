#include "main.h"
#include <stdio.h>

/**
 * set_bit - a function that sets the valure of a bit to 1 at a given index
 * @n: a pointer
 * @index: the index
 *
 * Return: 1 if it is successful or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return -1;
	*n = *n | (1 << index)
		return 1;
}
