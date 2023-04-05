#include "lists.h"

/**
 * listint_len - returns the number of element in a llinked list
 *
 * @h: head pointer
 *
 * Return: the number of elememts
 */
size_t listint_len(const listint_t *h)
{
	size_t display = 0;

	while (h != NULL)
	{
		h = h->next;
		display++;
	}
	return (display);
}
