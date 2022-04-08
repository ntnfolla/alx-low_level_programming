#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print lowercase alphabets backward
 * Return: 0
 */
int main(void)
{
char c;

for (c = 'z'; c >= 'a'; --c)
putchar(c);

putchar('\n');

return (0);
}
