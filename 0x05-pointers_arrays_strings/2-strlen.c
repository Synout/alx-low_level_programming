#include "main.h"

/**
* _strlen - function that returns the length of strength
* @s: string to get length of
* Return: int
*/

int _strlen(char *s)
{
int i = 0;
for (; s[i];)
i++;
return (i);
}
