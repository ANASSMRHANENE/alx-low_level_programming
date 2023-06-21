#include "main.h"
/**
 * print_last_digit - a function of last digit
 * @n: parametre
 * Return: 0(SUCCESS)
 */
int print_last_digit(int n)
{
	int r;
r = n % 10;
	_putchar(r + '0');
	return (n % 10);
}
