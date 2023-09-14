#include "lists.h"

/**
 * sum_dlistint - function
 * @head: pointer
 * Return: sum of all data in the list
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nod = head;
	int somme = 0;

	while (nod)
	{
		somme += nod->n;
		nod = nod->next;
	}

	return (somme);
}
