#include "main.h"

/**
 * jack_bauer - function to print all time in hh:mm format.
 *
 * Return: none.
 */
void jack_bauer(void)
{
int hr = 0;
for (; hr < 24; hr++)
{
int m = 0;
int hr_t = hr / 10;
int hr_o = hr % 10;
for (; m < 60; m++)
{
int m_t = m / 10;
int m_o = m % 10;
_putchar(hr_t + '0');
_putchar(hr_o + '0');
_putchar(':');
_putchar(m_t + '0');
_putchar(m_o + '0');
_putchar('\n');
}
}
}
