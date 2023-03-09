#include "main.h"

/**
 * factorial - A program that gets the factorial of a n
 * @n: Integer
 * Return: On Success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
