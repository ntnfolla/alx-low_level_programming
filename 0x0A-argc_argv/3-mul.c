#include "main.h"
#include <stdlid.h>
#include <stdio.h>

/**
 * main - Program that takes first two integers
 * @argc: Number of command
 * @argv: Array name
 * Return: 1 if the argument is enough 0 otherwise
 */

int main(int argc, char *argv[])
{
int i, j;
if (argc == 1 || argc == 2)
{
printf("Error\n");
return (1);
}
else
{
j = 1;

for (i = 1; i < 3; i++)
	j *= atoi(argv[i]);
printf("%d\n", j);
}

return (0);
}
