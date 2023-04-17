#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struc * t dog
 * @d: struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
