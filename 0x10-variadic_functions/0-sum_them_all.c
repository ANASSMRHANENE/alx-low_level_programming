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
va_list args;
va_start(args, n);
int sum = 0;
unsigned int i;
if(n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
