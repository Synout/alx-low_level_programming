#include <stdio.h>
0;276;0c#include <stdlib.h>

/**
 * main - entry point function
 * @argc: the array size of inputs
 * @argv: array of inputs
 * Return: always 0
 */

int main(int argc, char *argv[])
{
int i = 1;
int multi = 1;

if (argc == 1)
{
printf("Error\n");
return (argc);
}
for (; i < argc; i++)
{
multi *= atoi(argv[i]);
}

printf("%d\n", multi);

return (0);
}

