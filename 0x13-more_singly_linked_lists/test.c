#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (size);
}
