#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_listint_loop_pl - function
 * @head: pointer
 * Return: address of node
 */
listint_t *find_listint_loop_pl(listint_t *head)
{
	listint_t *p, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (p = head; p != end; p = p->next)
			if (p == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * print_listint_safe - prints a linked list, even if it
 * has a loop
 *
 * @head: head of list to print
 *
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	int i;
	listint_t *loopnode;

	loopnode = find_listint_loop_pl((listint_t *) head);

	for (len = 0, i = 1; (head != loopnode || i) && head != NULL; len++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == loopnode)
			i = 0;
		head = head->next;
	}

	if (loopnode != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (len);
}
