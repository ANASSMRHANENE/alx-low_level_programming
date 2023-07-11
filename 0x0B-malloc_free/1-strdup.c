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
int i = 0;
int j;
int n = 0;
while (str[i] != '\0')
{
i++;
}
j = i + 1;
p = malloc(sizeof(char) * j);
while (n < j)
{
if (p == NULL)
{
return (NULL);
}
p[n] = str[n];
n++;
}
return (p);
}
