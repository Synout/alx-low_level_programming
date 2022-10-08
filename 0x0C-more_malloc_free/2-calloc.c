#include "main.h"

/**
 * _calloc - func that allocates mem for an array
 * @nmemb: first string to concat
 * 
 * @size: size of array
 * Return: NULL if error, or pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *array;
unsigned int i = 0;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

array = malloc(size * nmemb);
for (; i < (size * nmemb); i++)
{
array[i] = '\0';
}
return (array);
}
