#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function
 * @s1: parametre
 * @s2: parametre
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
int n = 0;
int m = 0;
char *p;
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
p = malloc((i + j + 1) * sizeof(char));
if (p == NULL)
{
return (NULL);
}
while (n <= i)
{
p[n] = s1[n];
n++;
}
while (m <= j)
{
p[n] = s2[m];
m++;
n++;
}
p[n] = '\0';
return (p);
}
