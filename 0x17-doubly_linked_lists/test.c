#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a doubly linked list
* @head: head of the list
* @n: an integer
*
* Return: address of the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
