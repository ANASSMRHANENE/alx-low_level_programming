#include "main.h"
/**
 * print_rev - function
 * @s: parametre
 * Return: 0(SUCCESS)
 */
void print_rev(char *s)
{
	char *c;
	*c = *s;
	for (; *s != '\0' ; s++)
	{}
	for (*s = '\0' ; *s = *c ; s--)
	{
		_putchar(s);
	}
	_putchar('\n');
}
