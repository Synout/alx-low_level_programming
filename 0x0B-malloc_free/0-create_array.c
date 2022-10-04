#include "main.h"

/*
 * create_array : creates an array of chars and inits with spec char
 * @size : size of array
 * @c : initating char
 * Return - NULL if size = 0, else char
 */



char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *array;


if (size == 0)
{
return (NULL);
}


array = malloc(sizeof(char) * size);


for (; i < size; i++)
{
array[i] = c;
}
return (array);
}
