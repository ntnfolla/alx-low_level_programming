#include "main.h"
#include <stdio.h>
/**
 * s_len - calculate the length
 * @s: string
 * Return: string length
 */
int s_len(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + s_len(s + 1));
}
}
/**
 * pal - check if a string is a palindrome
 * @s: original string
 * @i: initial input
 * @len: length
 * Return: 1 if palindrome 0 otherwise
 */
int pal(char *s, int i, int len)
{
if (*(s + i) == *(s + len - 1 - i) && i == (len / 2))
{
return (1);
}
if (*(s + i) != *(s + len - 1 - i))
{
return (0);
}
else
return (pal(s, i + 1, len));
}
/**
 * is_palindrome - write 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 if it is palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
if (pal(s, 0, s_len(s)) == 1)
return (1);
else
return (0);
}
