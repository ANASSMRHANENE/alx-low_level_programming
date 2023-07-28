#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a new node at the end of list
 * @head: double pointer to the list_t list
 * @str: string puted in the new node
 *
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *m;
	list_t *t = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	m = malloc(sizeof(list_t));
	if (!m)
		return (NULL);

	m->str = strdup(str);
	m->len = len;
	m->next = NULL;

	if (*head == NULL)
	{
		*head = m;
		return (m);
	}

	while (t->next)
		t = t->next;

	t->next = m;

	return (m);
}
