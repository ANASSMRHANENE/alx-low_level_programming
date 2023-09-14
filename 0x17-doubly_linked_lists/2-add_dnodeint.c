#include "lists.h"

/**
 * add_dnodeint - function
 * @head: pointer
 * @n: int
 * Return: address of new element
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if (*head)
		(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
