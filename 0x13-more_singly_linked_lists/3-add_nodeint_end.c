#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a listint node to the end of a list
 *
 * @head: head of list
 * @n: value to give new node
 *
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
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
