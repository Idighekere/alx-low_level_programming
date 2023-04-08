#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: a pointer to the string of chars 0 and 1
 * Return: the converted number or 0 if strings in b is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int numb = 0;
	int a = 0;

	if (b == NULL)
		return (0);

	do {
		if (b[a] != '0' && b[a] != '1')
			return (0);

		numb <<= 1;
		if (b[a] == '1')
			numb |= 1;

		a++;
	} while (b[a] != '\0');

	return (numb);
}
