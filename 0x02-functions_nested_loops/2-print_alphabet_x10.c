#include "main.h"
/**
 * print_alphabet_x10 - is a function shows
 * the alphabets 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
int i ;
char j ;
	for (i = 1 ; j <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}