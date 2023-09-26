#include "lists.h"

/**
 * add_nodeint_end - adds a new node at th eend of list
 * @head: pointer to the address of the head
 * @n: the integer of the new node
 *
 * Return: The address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->NEXT != NULL)
			last = lat->next;
		last->next = new;
	}
}
