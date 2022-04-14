#include "main.h"

/**
 * _isdigit - checks if it is digit
 * @c: input number
 * Return: give 1 if it is a number (0 and 9), 0 otherwise
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
