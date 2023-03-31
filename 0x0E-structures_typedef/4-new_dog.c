#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - makes a dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *ptr;

	newdog = malloc(sizeof(dog_t));

	if (!newdog)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * (strlen(name) + 1));
	if (!ptr)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = ptr;
	ptr = 0;
	ptr = malloc(sizeof(*ptr) * (strlen(owner) + 1));
	if (!ptr)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->owner = ptr;
	for (; *owner != 0; ptr++, owner++)
		*ptr = *owner;
	*ptr = 0;

	ptr = newdog->name;
	for (; *name != 0; ptr++, name++)
		*ptr = *name;
	*ptr = 0;

	newdog->age = age;
	return (newdog);
}
