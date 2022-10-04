#include "main.h"

/**
 * str_concat - returns pointer to mem with cp of string
 *
 * @s1 : string to concat
 * @s2 : string to concat
 * Return: NULL if str = NULL, else char
 */

char *str_concat(char *s1, char *s2)
{
unsigned int i, j;
char *array;

if (s1 == NULL && s2 == NULL)
{
return (NULL);
}
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (j = 0; s1[i];)
{
i++;
}
for (j = 0; s2[j];)
{
j++;
}
array = malloc(sizeof(char) * (i + j + 1));
if (array == NULL)
{
return (NULL);
}
for (i = 0; s1[i]; i++)
{
array[i] = s1[i];
}
for (j = 0; s2[j]; j++)
{
array[i] = s2[j];
i++;
}
i++;
array[i + j] = '\0';
return (array);
}
