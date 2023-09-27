#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list
 * @head: pointer to the address of the head of the list
 *
 * Return: head node's data on success
 * On failer 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (data);
}



