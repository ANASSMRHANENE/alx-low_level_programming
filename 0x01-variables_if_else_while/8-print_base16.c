#include <stdio.h>
/**
 * main - this project is about number
 * in hexadicimal
 *Return: 0(Success)
 */
int main(void)
{
char hexa;
for (hexa = '0' ; hexa <= '9' ; hexa++)
{
	putchar(hexa);
}
for (hexa = 'a' ; hexa < 'f' ; hexa++)
{
	putchar(hexa);
}
putchar(hexa);
return (0);
}
