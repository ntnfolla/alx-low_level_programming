#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - return the length of a string
 * @s: new string
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
int x;

x = 0;
if (*s == '\0')
return (0);
x = 1 + _strlen_recursion(s + 1);

return (x);
}
