#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: pointer
 * @old_size: byte size to be allocated
 * @new_size: new size in bytes
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *newptr = NULL, *oldptr = ptr;
	void *ret = NULL;

	if (new_size == 0)
	{
		if (oldptr != NULL)
			free(ptr);
		return (ptr);
	}

	if (old_size == new_size)
		return (ptr);

	ret  = malloc(new_size);
	
	if (!ret)
		return (NULL);

	newptr = ret;
	if (oldptr)
	{
		for (;*oldptr != 0; oldptr++)
			*newptr = *oldptr;
	}
	free(ptr);

	return (ret);
}
