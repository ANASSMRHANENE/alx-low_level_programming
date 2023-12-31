#include "lists.h"
/**
 * find_listint_loop - function
 * @head: linked list
 * Return: address of the node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *f = head;
	listint_t *s = head;

	if (!head)
		return (NULL);

	while (s && f && f->next)
	{
		f = f->next->next;
		s = s->next;
		if (f == s)
		{
			s = head;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (f);
		}
	}

	return (NULL);
}
