#include "main.h"
/**
 * times_table - function
 * Return: 0(SUCCESS)
 */
void times_table(void)
{
int i, j, r, u, d;
for (i = 0 ; i <= 9 ; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
r = i * j;
if (r > 9)
{
u = r % 10;
d = (r - u) / 10;
_putchar(',');
_putchar(' ');
_putchar(d + '0');
_putchar(u + '0');
}
else
{
if (j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(r + '0');
}
}
_putchar('\n');
}
}
