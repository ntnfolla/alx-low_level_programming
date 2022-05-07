#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two string
 * @s1: string one
 * @s2: string two
 * @n: size of concatenated
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1Size, s2Size, i, nSize;
char *conStr;
i = 0;
s1Size = 0;
s2Size = 0;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (*(s1 + s1Size))
	s1Size++;
while (*(s2 + s2Size))
	s2Size++;
if (n >= s2Size)
	nSize = s2Size;
else
	nSize = n;
conStr = malloc((s1Size + nSize + 1) * sizeof(char));
if (conStr == NULL)
	return (NULL);
for (i = 0; i < s1Size; i++)
*(conStr + i) = *(s1 + i);
for (i = s1Size; i < (s1Size + nSize); i++)
*(conStr + i) = *(s2 + i - s1Size);
*(conStr + i) = '\0';
return (conStr);
}
