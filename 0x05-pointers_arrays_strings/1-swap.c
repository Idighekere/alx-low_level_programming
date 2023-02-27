#include "main.h"

/**
 * swap_int - a function that swaps the vallue of two integers
 * @a: this is the firt entry
 * @b: this is the second entry
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
