#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the ellements of a list
 * @h: the string input
 * Return: NULL
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h)
{
if (h-str == NULL)
	printf("[%d] (%s)\n", 0, "nil");
else
{
printf("[%d] (%s)\n", h->len, h->str);
}
h = h->next;
count++;
}
return (count);
}
