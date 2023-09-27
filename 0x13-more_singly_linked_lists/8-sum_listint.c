#include "lists.h"

/**
 * sum_listint - returns the sum of all data in the list
 * @head: pointer to the head
 *
 * Return: th esum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
