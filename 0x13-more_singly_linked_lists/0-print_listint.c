#include "lists.h"
/**
 * print_listint - function
 * @h: pointer
 * Return: integer
 */
size_t print_listint(const listint_t *h)
{
size_t s = 0;
while (h)
{
printf("%d\n",h->n);
h = h->next;
s++;
}
return (s);
}
