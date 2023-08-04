#include "main.h"

/**
 * flip_bits - function
 * @n: parametre
 * @m: parametre
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, j = 0;
unsigned long int cur;
unsigned long int x = n ^ m;
for (i = 63; i >= 0; i--)
{
cur = x >> i;
if (cur & 1)
j++;
}
return (j);
}
