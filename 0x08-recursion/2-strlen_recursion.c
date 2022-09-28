#include "main.h"

/**
 * _strlen_recursion - counts len of chars using recursion
 * @s : string of chars to count len
 * Return: int
 */


int _strlen_recursion(char *s)
{
int i = 0;

if (*s != '\0')
{
i++;
i +=_strlen_recursion(s + 1);

}

return (i);

}
