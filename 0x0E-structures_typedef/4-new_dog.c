#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *new_dog - Thos function creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int mk, ol, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	for (mk = 0; name[mk]; mk++)
		;
	mk++;
	dog->name = malloc(mk * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < mk; i++)
	{
		dog->name[i] = name[i];
	}
	dog->age = age;
	for (ol = 0; owner[ol]; ol++)
		;
	ol++;
	dog->owner = malloc(ol * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
	{
		dog->owner[i] = owner[i];
	}

	return (dog);
}
