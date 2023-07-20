#include "variadic_functions.h"
#include <stdio.h>
#include <stdrag.h>
/**
 * print_numbers - function
 * @separator: parametre
 * @n: parametre
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
printf ("%d", va_arg(args, unsigned int));
}
if (i < n && separator)
{
printf ("%s", separator);
}
printf("\n");
va_end(args);
}
