#include "lists.h"

/**
 * listint_len - determine the number of elements of the list
 * @h: The list
 *
 * Return: an integer
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
