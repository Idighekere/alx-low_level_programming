#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A program that will assign a random number to the variable n
 * Return: 0(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("%s and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%s and is 0\n", n);
	}
	else
	{
		printf("%s and is less than 6 and not 0\n");
	}
	return (0);
}
