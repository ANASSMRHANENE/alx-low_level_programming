#include <stdio.h>
/**
 * main - using putchar to show numbers
 * Return: 0(Success)
 */
int main(void)
{
int number;
char c;
for (number = 0 ; number < 10 ; number++)
{
	c = number + '0';
	putchar(c);
}
putchar('\n');
return (0);
}
