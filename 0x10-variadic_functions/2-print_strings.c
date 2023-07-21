#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - function
 * @separator: parametre
 * @n:parametre
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
va_star(args, n);
for (i = 0; i < n; i++)
{
printf("%s",va_arg(args, char));
va_arg(args, unsigned int);
if(i < n - 1 && separator)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
