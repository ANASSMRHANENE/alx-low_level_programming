#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_diagsums - function
 * @a: parametre
 * @size: parametre
 * Return: 0(SUCCESS)
 */
void print_diagsums(int *a, int size)
{
int i, j, s;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (j == i)
{
s = s + a[i][j];
}
}
}
printf(s);
}
