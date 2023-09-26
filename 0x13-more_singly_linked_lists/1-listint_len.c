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
	litint_t *tmp;

	tmp = h;
	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}
