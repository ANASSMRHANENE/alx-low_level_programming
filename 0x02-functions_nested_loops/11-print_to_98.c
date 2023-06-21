#include "main.h"
/**
 * print_to_98 - function
 * @n: parametre
 * Return: 0(SUCCESS)
 */
void print_to_98(int n)
{
int i;
	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			_putchar(i + '0');
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
			_putchar(i + '0');
			if (i != n)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	}
}
