#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function
 * @head: A pointer
 * Return: If the list is not looped - 0.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *i, *p;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	i = head->next;
	p = (head->next)->next;

	while (p)
	{
		if (i == hare)
		{
			i = head;
			while (i != p)
			{
				nodes++;
				i = i->next;
				p = p->next;
			}

			i = i->next;
			while (i != p)
			{
				nodes++;
				i = i->next;
			}

			return (nodes);
		}

		i = i->next;
		p = (p->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - function
 * @head: A pointer
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
