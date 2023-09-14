#include "lists.h"

/**
 * add_dnodeint_end - function
 * @head: pointer
 * @n: int
 * Return: address of new element
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *end = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (end)
	{
		while (end->next)
			end = end->next;
		newnode->prev = end;
		end->next = newnode;
	}
	else
	{
		*head = newnode;
		newnode->prev = NULL;
	}

	return (newnode);
}
