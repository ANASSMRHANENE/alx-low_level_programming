#include "lists.h"

/**
 * delete_dnodeint_at_index - function
 * @head: pointer
 * @index: position of node to delete
 * Return: 1 or -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *end_node = *head;
	dlistint_t *node_delete = *head;
	unsigned int idx;
	unsigned int cont = 0;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = node_delete->next;
		free(node_delete);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	idx = index - 1;
	while (end_node && cont != idx)
	{
		cont++;
		end_node = end_node->next;
	}

	if (cont == idx && end_node)
	{
		node_delete = end_node->next;
		if (node_delete->next)
		node_delete->next->prev = end_node;
		end_node->next = node_delete->next;
		free(node_delete);
		return (1);
	}

	return (-1);
}
