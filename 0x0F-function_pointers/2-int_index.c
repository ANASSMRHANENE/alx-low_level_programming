#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function
 * @array: tab
 * @size: parametre
 * @cmp: parametre
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int c;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (c = 0; c < size; c++)
	{
		if ((*cmp) (array[c]))
		{
			return (c);
		}
	}
	return (-1);
}
