#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a doubly linked list
* @head: head of the list
* @n: an integer
*
* Return: address of the new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	ptr = *head;
	if (*head != NULL)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
	else
		*head = new;
	new->prev = ptr;
	new->next = NULL;
	return (new);
}
