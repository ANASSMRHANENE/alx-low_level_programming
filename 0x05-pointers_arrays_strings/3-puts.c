#include "main.h"
/**
 * _puts - function
 * @str: parametre
 * Return: 0(SUCCESS)
 */
void _puts(char *str)
{
	char s;
	for (; *str != '\0'; str++)
	{
		s = *str;
		_putchar(s);
	}
	_putchar('\n');

}
