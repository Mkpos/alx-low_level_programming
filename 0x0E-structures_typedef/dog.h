#ifndef DOG_H
#define DOG_H

/**
 * struct dog - This will serve as a prototype describing dog
 * @name: Name of the dog to be stored.
 * @age: Age of the dog to be stored.
 * @owner: Owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new name for the type struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
