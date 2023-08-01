#include "lists.h"
/**
 * add_nodeint - function
 * @head: pointer
 * @n: parametre
 * Return: new node at begening
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t newnode;
listint_t *newnode = malloc(sizeof(listint_t));
if (!head || !newnode)
{
return (NULL);
}
newnode->n = n;
newnode->next = NULL;
if(*head)
{
newnode->next = *head;
*head = newnode;
}
return (newnode);
}
