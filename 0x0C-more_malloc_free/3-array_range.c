#include "main.h"

/**
 * array_range - func that makes array of certain range
 * @min: min int
 *
 * @max: max int
 * Return: NULL if error, or pointer
 */

int *array_range(int min, int max)
{
int *array;
int i = 0;
int size = 0;

if (min >= max)
{
return (NULL);
}
size = max - min;
array = malloc(sizeof(int) * size);
if (array == NULL)
{
return (NULL);
}
size = max - min;
for (; i < size; i++)
{
array[i] = min++;
}
return (array);
}
