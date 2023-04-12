#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint list
 *
 * @head: head of list to free
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
