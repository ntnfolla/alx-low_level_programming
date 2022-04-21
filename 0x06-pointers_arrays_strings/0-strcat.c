#include "main.h"
#include <stdio.h>
/**
 *_strcat - concatenates "src" and "dest"
 *@dest: pointer to destnation input
 *@src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
int c, c2;
c = 0;
/*find the size of dest array*/
while (dest[c])
C++;
/* iterate through each src array value without the null byte*/
for (c2 = 0; src[c2] ; c2++)
/*append src[c2] to dest [c] while overwritting the null byte in dest*/
dest[c++] = src[c2];
return (dest);
}
