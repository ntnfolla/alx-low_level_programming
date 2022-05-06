#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: new memory
 * Return: string initialized
 */
void *malloc_checked(unsigned int b)
{
void *memLoc;
memLoc = malloc(b);
if (memLoc == NULL)
	exit(98);
return (memLoc);
}
