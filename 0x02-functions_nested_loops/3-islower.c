#include "main.h"
/**
 * main - a project about veryfing if a
 * letter is lowercase
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
return (0);
}
