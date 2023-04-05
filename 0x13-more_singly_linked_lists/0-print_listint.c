#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: head of link list node
 *
 * Return: number of noes
 */
size_t print_listint(const listint_t *h)
{
	size_t display = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		display++;
	}

	return (display);
}
