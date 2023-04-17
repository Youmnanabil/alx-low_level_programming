#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that prints a struct dog
 * @d: dog to be print
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("name: %s \n", d->name ? d->name : "(nil)");
		printf("age: %f \n", d->age);
		 printf("owner: %s \n", d->owner ? d->owner : "(nil)");
	}
}
