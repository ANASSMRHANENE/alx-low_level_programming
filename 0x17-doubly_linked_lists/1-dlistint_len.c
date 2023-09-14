#include "lists.h"

/**
 * dlistint_len - returns a number
 * @h: pointer
 * Return: number nodes
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *nod = h;
	size_t count = 0;

	while (nod)
	{
		count++;
		nod = nod->next;
	}

	return (count);
}
