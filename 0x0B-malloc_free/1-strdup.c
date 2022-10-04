#include "main.h"

/**
 * _strdup - returns pointer to mem with cp of string
 *
 * @str : string to copy to mem
 *
 * Return: NULL if str = NULL, else char
 */

char *_strdup(char *str)
{
unsigned int i = 0;
char *array;

if (str == NULL)
{
return (NULL);
}
for (; str[i];)
{
i++;
}

array = malloc(sizeof(char) * (i + 1));

if (array == NULL)
{
return (NULL);
}
array[i] = '\0';
for (; i > 0;)
{
i--;
array[i] = str[i];

}
return (array);
}
