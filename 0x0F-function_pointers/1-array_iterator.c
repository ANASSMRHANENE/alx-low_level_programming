#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - function
 * @array: tab
 * @size: parametre
 * @action: parametre
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int c;

	if (array && action != NULL)
	{
		for (c = 0; c < size; c++)
		{
			(action) (array[c]);
		}
	}
}
