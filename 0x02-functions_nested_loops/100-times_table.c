#include "main.h"
/**
 *print_times_table - function
 *@n: parametre
 *Return: 0(SUCCESS)
 */
void print_times_table(int n)
{
	int i, j, k;
	if (n <= 15 && n >= 0)
	{
		for (i = 0 ; i <= n ; n++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				if (j != n)
				{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				_putchar(',');
				_putchar(' ');
				}
				if (j == n)
				{
					_putchar((j / 10) + '0');
					_putchar((
				}
			}
		}
	}
}
