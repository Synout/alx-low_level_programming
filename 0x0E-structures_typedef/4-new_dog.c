#include <stdlib.h>
#include "dog.h"


/**
 * dog_t - function that creates dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return : dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *dog;

if (name == NULL || owner == NULL || age <0)
{
return (NULL);
}

dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
  return (NULL);
}


dog->name = malloc(sizeof(char)

dog->
}
