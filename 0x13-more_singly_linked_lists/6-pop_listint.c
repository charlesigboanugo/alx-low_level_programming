#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - returns value of head node and removes it,
 * 0 otherwise
 *
 * @head: head of list
 *
 * Return: value of node, or 0 if list empty
 */
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
