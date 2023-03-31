#include "dog.h"
#include <stdlib.h>

size_t _strlen(char *s)
{
	size_t len = 0;

	for (; *s != 0; s++)
		len++;

	return (len);
}

void *_allocate(char *elem, size_t size)
{
	char *ptr, *res;

	ptr = malloc(sizeof(*ptr) * (size + 1));
	res = ptr;
	if (!ptr)
		return (NULL);
	for (; *elem != 0; ptr++, elem++)
		*ptr = *elem;

	return (res);

}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	
	newdog = malloc(sizeof(dog_t));
	if (!newdog)
		return(NULL);

	newdog->age = age;
	newdog->name = _allocate(name, _strlen(name));
	newdog->owner = _allocate(owner, _strlen(owner));

	return (newdog);
}
