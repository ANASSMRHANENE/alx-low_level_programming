#include "lists.h"
/**
 * add_nodeint - function
 * @head: pointer
 * @n: parametre
 * Return: new node at begening
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
