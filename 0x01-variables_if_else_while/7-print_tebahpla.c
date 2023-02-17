#include <stdio.h>
/**
 * main - a program that prints the lowercase alphabet in reverse
 * followed by a new line, using only putchar function
 * Return: 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
