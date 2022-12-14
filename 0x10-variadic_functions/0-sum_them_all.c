#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that sums all params
 * @n: total num of params passed
 * @...: params to be summed
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
va_list nums;
unsigned int i = 0;
unsigned int sum = 0;

va_start(nums, n);

for (; i < n; i++)
{
sum += va_arg(nums, int);
}
va_end(nums);

return (sum);
}
