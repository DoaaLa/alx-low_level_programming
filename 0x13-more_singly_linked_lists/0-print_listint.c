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
	listint_t *tmp;

	tmp = h;
	c = 0;
	while (tmp != NULL)
	{
		c++;
		printf("%d", tmp->n);
		tmp = tmp->next;
	}
	return (c);
}
