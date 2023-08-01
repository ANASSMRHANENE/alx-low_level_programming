#include "lists.h"
/**
 * add_nodeint_end - function
 * @head: pointer
 * @n: parametre
 * Return: new node at the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *endnode;
endnode = malloc(sizeof(listint_t));
if (!endnode)
{
return (NULL);
}
while (*head->next)
{
*head = *head->next;
}
*head->next = endnode;
endnode->n = n;
return (endnode);
}
