#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: character s
 * @accept: character accept
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; *(s + i); i++)
{
for (j = 0; *(accept + j); j++)
{
if (*(s + i) == *(accept + j))
{
break;
}
}
if (*(accept + j) != '\0')
{
return (s + i);
}
}
return (0);
}
