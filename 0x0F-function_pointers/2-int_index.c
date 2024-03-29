#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index -  a function that searches for an integer
 * @size: number of elements
 * @array: array
 * @cmp: a pointer to the function to be used to compare
 * Return: 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);

	}
	return (-1);
}
