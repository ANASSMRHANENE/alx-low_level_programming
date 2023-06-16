#include <stdio.h>
/**
 * main - cambo of three digits
 * Return: 0(Success)
 */
int main(void)
{
int i, j, z;
for (i = 0 ; i <= 9 ; i++)
{
	for (j = i + 1 ; i <= 9 ; j++)
	{
		for (z = j + 1 ; z <= 9 ; z++)
		{
			if (i != 7 || j != 8 || z != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
