#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function
 * @n: parametre
 * Return: 0(SUCCESS)
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int s;
va_list args;
va_start(args, n);
unsigned int i;
s = 0;
if(n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
s += va_arg(args,unsigned int);
}
va_end(args);
return (s);
}
