#include "main.h"

/**
 * _isalpha - function to check if input is alpha.
 * @c: input character
 *
 * Return: 1 if character is alpha, 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
