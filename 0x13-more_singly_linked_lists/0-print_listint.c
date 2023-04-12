#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints a listint with newlines between
 * each node's value
 *
 * @h: head of list to print
 *
 * Return: length of list
 */

size_t print_listint(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (len);
}
