#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a listint_t node at index in list
 *
 * @head: head of list
 * @index: index to add node at, starting at 0
 *
 * Return: 1 if success, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = NULL, *prev = NULL;
	unsigned int c = 0;

	if (head == NULL)
		return (-1);
	ptr = *head;
	for (; c < index && ptr; ptr = ptr->next, c++)
	{
		prev = ptr;
	}
	if (ptr == NULL)
		return (-1);
	if (index != 0)
		prev->next = ptr->next;
	else
		*head = (*head)->next;
	ptr->next = NULL;
	free(ptr);
	return (1);
}
