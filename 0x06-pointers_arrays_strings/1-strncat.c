#include "main.h"
#include <stdio.h>
/**
 *_strncat - Concates two strings
 *
 *@dest: The destination string
 *@src: The source string
 *@n: The limit of concatenation
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int abebe = 0, i = 0;
while (dest[abebe])
{
abebe++;
}
while (i < n && src[i])
{
dest[abebe] = src[i];
abebe++;
i++;
}
dest[abebe + n + 1] = '\0';
return (dest);
}
