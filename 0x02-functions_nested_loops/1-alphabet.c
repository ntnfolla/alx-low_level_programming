#include "main.h"

/**
 * main - main
 *
 * Description: lowercase alphabet in a new line
 * print_alphabet - print lowercase alphabets
 *
 */
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar('\n');
}
