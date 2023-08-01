#include "lists.h"
/**
 * add_nodeint - function
 * @head: pointer
 * @n: parametre
 * Return: new node at begening
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t n_node;
listint_t *n_node = malloc(sizeof(listint_t));
if (!head || !n_node)
{
return (NULL);
}
n_node->n = n;
n_node->next = NULL;
if (*head)
{
n_node->next = *head;
*head = n_node;
}
return (n_node);
}
