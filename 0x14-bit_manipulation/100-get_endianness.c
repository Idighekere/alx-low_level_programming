#include <stdio.h>
#include "main.h"

/**
 * get_endianness - a function that checks for endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int a = 1;

	char *x = (char *) &a;

	return ((int)*x);
}
