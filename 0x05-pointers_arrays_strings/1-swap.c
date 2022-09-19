#include "main.h"

/**
* swap_int - function to swap between a and b
* @a: number to swap
* @b: number to swap
* Return: void
*/

void swap_int(int *a, int *b)
{
int temp = 0;
temp = *a;
*a = *b;
*b = temp;
}
