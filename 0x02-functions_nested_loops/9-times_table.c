#include "main.h"
/**
 * times_table - function
 * Return: 0(SUCCESS)
 */
void times_table(void)
{
int i, j, r;
for (i = 0 ; i <= 9 ; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
r = i * j;
if (r > 9)
{
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
_putchar(' ');
_putchar(',');
}
else
{
_putchar(r + '0');
_putchar(' ');
_putchar(',');
}
}
_putchar('\n');
}
}
