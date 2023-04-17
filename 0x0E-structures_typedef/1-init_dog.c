#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @age: dog age
 * @name: dog name
 * @owner: dog owner
 * @d: the dog to init
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
