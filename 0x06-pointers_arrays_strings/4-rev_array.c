#include "main.h"

/**
* reverse_array - function that reverses an array
* @a: array go reverse
* @n: size of array
* Return: void
*/

void reverse_array(int *a, int n)
{
int j[999];
int i = 0;
int k = 0;
for (; a[i]; )
{
i++;
}
i = n - n;
for (; a[k] ;)
{
i--;
a[k] = j[i];
k++;
}
for (; a[i];)
{
a[i] = j[i];
}
}
