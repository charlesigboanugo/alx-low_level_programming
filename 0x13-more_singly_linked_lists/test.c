#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL, *ptr = NULL;
	
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	ptr = *head;
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	else
		*head = new;
	return (ptr);
}
