#include "lists.h"

/**
 * get_dnodeint_at_index - function
 * @head: pointer
 * @index: node.
 * Return: node or NULL.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nod = head;
	unsigned int count = 0;

	while (nod && count != index)
	{
		count++;
		nod = nod->next;
	}
	if (nod && count == index)
		return (nod);
	return (NULL);
}
