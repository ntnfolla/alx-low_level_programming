#include "main.h"
#include <stdio.h>
/**
 *_strcat - concatenates two strings
 *@dest: pointer to destnation input
 *@src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
int abebe = 0, i;
while (dest[abebe])
{
abebe++;
}
for (i = 0; src[i] != 0; i++)
{
dest[abebe] = src[i];
abebe++;
}
dest[abebe] = '\0';
return (dest);
}
