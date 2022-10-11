#include "dog.h"
/**
 * init_dog - initialize a variable type structure of dog
 * @d: pointer to structure
 * @name: pointer to name of the dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Return: void
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
