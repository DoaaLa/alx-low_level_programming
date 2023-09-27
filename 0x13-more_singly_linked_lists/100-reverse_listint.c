#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 * @head: pointer to the adddress of the head
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head);
{
	listint_t *tmp1, *tmp2;

	if (head == NULL || *head == NULL)
		return (NULL);

	tmp2 = NULL;

	while ((*head)->next != NULL)
	{
		tmp1 = (*head)->next;
		(*head)->next = tmp2;
		tmp2 = *head;
		*head = tmp1;
	}
	(*head)->next = tmp2;

	return (*head);
}
