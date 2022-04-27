#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of numbers
 * @n: number
 * Return: always 0
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
else
{
return (sqrt_manual(n, 1));
}
}
/**
 * sqrt_manual - calculate manually the sqrt of a number
 * @n: natural number
 * @i: counter number
 * Return: sqrt 0
 */
int sqrt_manual(int n, int i)
{
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
else
return (sqrt_manual(n, i + 1));
}
