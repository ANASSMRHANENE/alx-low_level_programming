#include <stdio.h>
/**
 * main - this programme is about showing
 * all cambo of digits numbers
 * Return: 0(Success)
 */
int main(void)
{
int i;
for (i = 0 ; i <= 9 ; i++)
{
	putchar(i + '0');
	if (i != 9)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
