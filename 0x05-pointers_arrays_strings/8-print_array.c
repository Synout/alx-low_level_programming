#include "main.h"

/**
* print_array - function that prints array
* @a: array to iterate
* @n: number of elements to print
* Return: void
*/

void print_array(int *a, int n)
{
int i = 0;
int j = 0;


for (; a[i];)
{
i++;
}

for (; j < n && j < i; j++)
{
printf("%d", a[j]);

if (j + 1 != n)
{
printf(", ");
}
;
}
printf("\n");
}
