#include "main"
/**
 * print_sign - is a function about
 * showing the sign of a number
 * @c: is a parametre
 * Return: 0(SUCCESS)
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
