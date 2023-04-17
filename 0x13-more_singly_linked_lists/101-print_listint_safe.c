#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint_safe - prints a list
* @head: pointer to the list
*
* Return: number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = NULL;
	size_t len = 0;
	int diff;

	if (head != NULL && head->next != NULL && head != head->next)
	{
		diff = (int) (size_t) (head->next - head);
	}

	while (head != NULL && head != head->next)
	{
		len++;
		printf("[%p] %d\n", (void *) head, head->n);
		ptr = head;
		head = head->next;
		if ((diff < 0 && ptr < head) || (diff > 0 && ptr > head))
		{
			if (head)
				printf("-> [%p] %d\n", (void *) head, head->n);
			break;
		}
	}

	return (len);
}
