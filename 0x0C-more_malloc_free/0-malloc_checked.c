#include "main.h"

/**
 * malloc_checked - func that allocates mem using malloc
 * 
 * @b : size
 *
 * Return: 98 if fails, NULL if size = 0, else 0
 */



void *malloc_checked(unsigned int b)
{
void *addr = malloc(b);

if (addr == NULL || b == 0)
{
exit(98);
}
 
return (addr);
}
