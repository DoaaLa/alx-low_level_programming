#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: The list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int c;
	listint_t *tmp;

	tmp = h;
	c = 0;
	if (tmp == NULL)
	{
		printf("The list is empty \n");
	}
	else
	{
		while (tmp->next != NULL)
		{
			c++;
			printf("%d", tmp->n);
			tmp = tmp->next;
		}
	}
	return (c);
}
