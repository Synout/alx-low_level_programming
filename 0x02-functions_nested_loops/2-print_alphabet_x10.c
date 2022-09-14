#include <stdlib.h>
#include <time.h>

/* more headers goes there */
#include <stdio.h>
#include "main.h"

/* betty style doc for function main goes there */

/**
 * print_alphabet_x10 - print alphabet function
 * Description - prints the alphabet 10 times
 * Return: nothing (void)
 */

void print_alphabet_x10(void)
{
/* your code goes there */
int n = 0;
for (; n < 10; n++)
{
int i = 'a';
for (; i <= 'z'; i++)
{
putchar(i);
}
putchar ('\n');
}
}
