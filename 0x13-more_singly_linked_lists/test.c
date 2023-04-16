#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a list
 * @head: a pointer to a pointer to the head of the list
 *
 * Return: a pointer to the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *ptr;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next != NULL)
	{
		temp = *head;
		*head = NULL;
		while (temp != NULL)
		{
			ptr = *head;
			*head = temp;
			temp = temp->next;
			(*head)->next = ptr;
		}
	}
	return (*head);
}
