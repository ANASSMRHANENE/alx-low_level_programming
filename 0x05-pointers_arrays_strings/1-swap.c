#include "main.h"
/**
 * swap_int - function of swaping
 * @a: parametre
 * @b: parametre
 * Return: 0(SUCCESS)
 */
void swap_int(int *a, int *b)
{
	a = &b;
	b = &a;
}
