#include "lists.h"

/**
 * add_nodeint - adds a new node at the begining of list
 * @head: pointer to the head of the list
 * @n: The integer of the new node
 *
 * Return: address of the new element on success
 * On failure return NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}


