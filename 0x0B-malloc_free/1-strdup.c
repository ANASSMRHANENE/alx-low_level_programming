#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function
 * @str: parametre
 * Return: pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
char *p;
int i;
int j;
int n;
for (i = 0; str[i] != '\0'; i++)
{
}
j = i + 1;
p = malloc(sizeof(char) * j);
while (n <= i)
{
if (str[n] == NULL)
{
return (NULL);
}
p[n] = str[n];
n++;
}
return (p);
}
