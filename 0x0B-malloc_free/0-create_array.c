#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array
 * @size: the size of the memory
 * @c: character
 * Return: Nothing if size = 0
 */

char *create_array(unsigned int size, char c)
{
char *arrayMem;
unsigned int i;
if (size == 0)
return (NULL);
arrayMem = malloc(size * sizeof(char));
if (arrayMem == NULL)
return (NULL);
for (i = 0; i < size; i++)
*(arrayMem + i) = c;
return (arrayMem);
}
