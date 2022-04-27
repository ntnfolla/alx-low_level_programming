#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - write 1 if it is prime number 0 otherwise
 * @n: number
 * Return: always 0
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
if (n == 2)
{
return (1);
}
else
return (is_prime_manual(n, 2));
}
/**
 * is_prime_manual - calculate if the number is prime
 * @n: natural number
 * @i: counter or divisor of n
 * Return: 1 if prime 0 otherwise
 */
int is_prime_manual(int n, int i)
{
if (n % i == 0)
{
return (0);
}
if (i == (n - 1) && i != 0)
{
return (1);
}
else
return (is_prime_manual(n, i + 1));
}
