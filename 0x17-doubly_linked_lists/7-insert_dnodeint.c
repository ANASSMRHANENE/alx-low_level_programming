#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 * @h: pointer
 * @idx: position of adding a node
 * @n: data for new node
 * Return: address of the new node
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *end_node = *h, *newnode;
	unsigned int indx, count = 0;
	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->prev = NULL;
		newnode->next = *h;
		if (*h)
			(*h)->prev = newnode;
		*h = newnode;
		return (*h);
	}

	indx = idx - 1;
	while (end_node && count != indx)
	{
		count++;
		end_node = end_node->next;
	}

	if (count == indx && end_node)
	{
		newnode->prev = end_node;
		newnode->next = end_node->next;
		if (end_node->next)
			end_node->next->prev = newnode;
		end_node->next = newnode;
		return (newnode);
	}
	free(newnode);
	return (NULL);
}
