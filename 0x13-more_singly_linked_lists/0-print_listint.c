#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: The list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t c;

	c = 0;
	while (h)
	{
		c++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
