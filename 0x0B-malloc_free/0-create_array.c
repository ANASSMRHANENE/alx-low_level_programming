#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function
 * @size : parametre
 * @c : parametre
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i = 0;
if (size == 0)
{
return (NULL);
}
p = malloc(size * sizeof(char));
if (p == NULL)
{
return (NULL);
}
while (i < size)
{
p[i] = c;
i++;
}
p[i] = '\0';
return (p);
}
