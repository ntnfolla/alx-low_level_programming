#include "main.h"
/**
 * _memset - fills with constant byte
 * @s: one constant
 * @b: second constant
 * @n: size
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}
