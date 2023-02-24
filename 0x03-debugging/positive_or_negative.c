#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * positive_or_negative - A program that assign a random number to the variable
 * @i: integer
 * Return: 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
