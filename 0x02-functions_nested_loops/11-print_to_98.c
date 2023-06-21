#include "main.h"
/**
 * print_to_98 - function
 * @n: parametre
 * Return: 0(SUCCESS)
 */
void print_to_98(int n)
{
int i, j, d;
if (n < 98)
{
for (i = n ; i <= 98 ; i++)
{
j = i / 10;
d = i % 10;
if (i >= 10)
{
_putchar(j + '0');
_putchar(d + '0');
}
else
{
_putchar(i + '0');
}
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (i = 98 ; i <= n ; i++)
{
j = i / 10;
d = i % 10;
if (i >= 10)
{
_putchar(j + '0');
_putchar(d + '0');
}
else 
{
_putchar(i + '0');
}
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
}
