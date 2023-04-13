#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data = 0;
	
	if (head != NULL && *head != NULL)
	{
		data = (*head)->n;
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	return (data);
}
