#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at in the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *list;
	unsigned int i = 0;

	while (str[i])
		i++;

	list = malloc(sizeof(list_t));
	if (!list)
		return (NULL);

	list->str = strdup(str);
	list->i = i;
	new->next = (*head);
	(*head) = list;

	return (*head);
}
