#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the list.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *actnode;
	dlistint_t *nextnode;

	if (head)
	{
		actnode = head;
		nextnode = head->next;
		while (nextnode)
		{
			free(actnode);
			actnode = nextnode;
			nextnode = nextnode->next;
		}
		free(actnode);
	}
}
