#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: source string
 * @needle: searching string
 *
 * Return: new string
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
{
return (haystack);
}
else
{
haystack++;
}
}
return (0);
}
