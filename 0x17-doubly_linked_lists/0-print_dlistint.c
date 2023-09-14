#include "lists.h"

/**
 * print_dlistint - function
 * @h: pointer
 * Return: nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *nod = h;
	size_t count = 0;

	while (nod)
	{
		printf("%i\n", nod->n);
		count++;
		nod = nod->next;
	}

	return (count);
}
