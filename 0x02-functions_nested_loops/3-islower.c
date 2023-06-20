#include "main.h"
/**
 * _islower - a project about veryfing if a
 * letter is lowercase
 * c - is a parametre
 * Return: 0(SUCCESS)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
