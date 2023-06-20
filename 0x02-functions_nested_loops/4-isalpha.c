#include "main.h"
/**
 *_isalpha - is a function shows if an
 * alpha is a lower/upper case or not
 * @c: is a paramatere 
 *Return: 0(SUCCESS)
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
{
	return (1);
}
return (0);
}
