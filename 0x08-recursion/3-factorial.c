#include "main.h"

/**
 * factorial - counts len of chars using recursion
 * @n : integer to find factorial of
 * Return: int
 */


int factorial(int n)
{

if (n == 0 || n == 1)
{

return (1);

}
if (n < 0)
{
return (-1);
}
else
{
n *= factorial(n - 1);
}
return (n);

}
