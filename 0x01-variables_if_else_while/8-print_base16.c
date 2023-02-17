#include <stdio.h>
/**
 * main - a program that prints all numbers of base 16 in lowercase
 * followed by a new line, Using only putchar function
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
