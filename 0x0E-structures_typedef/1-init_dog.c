#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intitializes a var from struct dog
 * @d: dog init
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return : void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
