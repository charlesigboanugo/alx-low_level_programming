#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - prints all the elements of a doubly linked list
* @h: head of the list
*
* Return: number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t len;

	for (len = 0; h != NULL; h = h->next)
	{
		len++;
	}
	return (len);
}
