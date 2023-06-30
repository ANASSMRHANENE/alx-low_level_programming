#include "main.h"
#include <stdio.h>
/**
 * main - this function concatenate
 * @dest: parametre
 * @src: parametre
 * @n: parametre
 * Return: 0(SUCCESS)
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j;
while (dest[i])
{
i++;
}
for (j = 0 ; j <= n ; j++)
{
dest[i] = src[j];
i++;
}
dest[i]='\0';
return (dest);
}
