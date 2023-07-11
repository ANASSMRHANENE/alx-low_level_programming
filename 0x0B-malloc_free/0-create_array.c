#include "main.h"
/**
 * create_array - function
 * @size : parametre
 * @c : parametre
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}
else
{
char *p = (char *)malloc(size * sizeof(char));
return (p);
}
return (NULL);
}
