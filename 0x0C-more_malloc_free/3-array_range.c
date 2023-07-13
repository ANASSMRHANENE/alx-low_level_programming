#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function
 * @min: parametre
 * @max: parametre
 * Return: pointer
 */
int *array_range(int min, int max)
{
int *p;
int i;
int j = 0;
if (min > max)
{
return (NULL);
}
p = malloc ((max - min + 1) * sizeof(int));
if (p == NULL)
{
return (NULL);
}
for (i = min; i <= max; i++)
{
p[j] = i;
j++;
}
return (p);
}
