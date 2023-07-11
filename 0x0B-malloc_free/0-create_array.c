#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function
 * @size : parametre
 * @c : parametre
 */
char *create_array(unsigned int size, char c)
{
char *p;
int i = 0;
if (size == 0)
{
return (NULL);
}
p = malloc(size * sizeof(char));
if (p == NULL)
{
return (NULL);
}
while(i < size)
{
s[i] = c;
i++;
}
s[i] = '\0';
return (s);
}
