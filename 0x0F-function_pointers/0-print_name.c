#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name of a person
 * @f: A pointer to function that print a name
 * Return: 0 always
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
