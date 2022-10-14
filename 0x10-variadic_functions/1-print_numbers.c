#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - function that prints numb with new line
 * @separator: the char to be used as separator
 * @n: number of ints
 * @...: the multi args passed to be printed
 * Return : void
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int i = 0;

va_start(nums, n);
for(; i < n; i++);
{
printf("%d", va_arg(nums, int));
if (
}
}
