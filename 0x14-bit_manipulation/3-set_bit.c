#include "main.h"
/**
 * set_bit - function
 * @n: pointer
 * @index: index of the bit
 * Return: 1 success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
