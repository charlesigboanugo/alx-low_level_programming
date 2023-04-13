#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (head != NULL && *head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
}
