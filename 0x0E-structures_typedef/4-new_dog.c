#include "dog.h"
#include <stdlib.h>

/**
 * * new_dog - creates a new dog
 * * @name: name of dog
 * * @age: age of dog
 * * @owner: owner of dog
 *
 * *
 *
 * * Return: struct dog
 *
 * * if fails, returns NULL
 *
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *p_dog;
	int i, dog_name, dog_owner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (dog_name = 0; name[dog_name]; dog_name++)
		;

	for (dog_owner = 0; owner[dog_owner]; dog_owner++)
		;

	p_dog->name = malloc(dog_name + 1);
	p_dog->owner = malloc(dog_owner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < dog_name; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';
	p_dog->age = age;

	for (i = 0; i < dog_owner; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';
	return (p_dog);
}
