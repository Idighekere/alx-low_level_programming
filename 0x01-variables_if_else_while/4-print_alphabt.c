#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++; ch != 'q' && ch != 'e')
		putchar(ch);
	putchar('\n');
	return (0);
}
