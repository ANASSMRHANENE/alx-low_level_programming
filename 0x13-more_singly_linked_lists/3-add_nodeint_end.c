#include "lists.h"
/**
 * add_nodeint_end - function
 * @head: pointer
 * @n: parametre
 * Return: new node at the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *t = *head;

	new = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (t->next)
		t = t->next;

	t->next = newnode;

	return (newnode);
}
