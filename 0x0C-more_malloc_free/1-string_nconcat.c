#include "main.h"

/**
 * string_nconcat - func that concats s1 with parts of s2
 * @s1: first string to concat
 * @s2: second string to concat
 * @n: number of bytes to copy from s20
 * Return: s
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *conc;
unsigned int i = 0;
unsigned int size;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (n > strlen(s2))
{
n = strlen(s2);
}
 size = sizeof(char) * (strlen(s1) + 1) + n*sizeof(char);
conc = malloc(size + 2);
size = 0;
for (i = 0; s1[i]; i++)
{
conc[size++] = s1[i];
}
for (i = 0; s2[i] && i < n; i++)
{
conc[size++] = s2[i];
}
conc[i] = '\0';
return (conc);
}
