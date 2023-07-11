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
char *p;
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
p = malloc((i + j + 2) * sizeof(char));
}
