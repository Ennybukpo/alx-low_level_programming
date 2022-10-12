#include "dog.h"

/**
 * init_dog - initialize variable of type struct dog
 * @d: pointer to struct dog
 * @name: char dog name
 * @age: sog age
 * @owner: char owners name
 * Return: No.
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
