#include "main.h"
/**
 * get_bit - function
 * @n: parametre
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bval;
if (index > 63)
{
return (-1);
}
bval = (n >> index) & 1;
return (bval);
}
