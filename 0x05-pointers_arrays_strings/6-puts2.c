#include "main.h"

/**
 * puts2 - A program that prints every other character of a strijng
 * starting with the first character, followed by a new line
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
